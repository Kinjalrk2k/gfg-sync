import { config } from "dotenv";
import axios from "axios";
import { tqdm, TqdmProgress } from "node-console-progress-bar-tqdm";
import ora, { spinners } from "ora";
import * as fs from "fs";
import * as path from "path";
import { fileURLToPath } from "url";

// configure dotenv
config();

/**
 * CONSTANTS
 */

const __dirname = path.dirname(fileURLToPath(import.meta.url));

const sleep = (ms) => new Promise((r) => setTimeout(r, ms));

const USERNAME = "kinjalrk2k";

const problemClasses = ["School", "Basic", "Easy", "Medium", "Hard"];

const extConverter = {
  python3: "py",
  python: "py",
  java: "java",
  cpp: "cpp",
  csharp: "cs",
  javascript: "js",
  ruby: "rb",
  swift: "swift",
  golang: "go",
  scala: "sc",
  kotlin: "kt",
  rust: "rs",
  typescript: "ts",
  racket: "rkt",
  erlang: "erl",
  elixir: "ex",
  php: "php",
};

const tqdmOptions = {
  progressSymbol: "─",
  progressColor: "green",
  maxColWidth: 100,
};

const submissionsDetails = [];

/**
 * STEP 1
 * List all submisisons
 */

const response = await axios.post(
  "https://practiceapi.geeksforgeeks.org/api/v1/user/problems/submissions/",
  { handle: USERNAME },
  { headers: { Cookie: process.env.GFG_COOKIE } }
);

for (const pc of problemClasses) {
  for (const [key, value] of Object.entries(response.data.result[pc] || {})) {
    submissionsDetails.push({ id: key, slug: value.slug, lang: value.lang });
  }
}

console.log(`${submissionsDetails.length} Submissions found!`);

/**
 * STEP 2:
 * Fetch each submisison and code
 */

console.log("Fetching submissions");
for (let e of tqdm(submissionsDetails, tqdmOptions)) {
  const response = await axios.get(
    `https://practiceapi.geeksforgeeks.org/api/latest/problems/${e.slug}/submissions/user/`,
    { headers: { Cookie: process.env.GFG_COOKIE } }
  );

  await sleep(1000);

  const submission = response.data.results.submissions[0];

  const response2 = await axios.get(
    `https://practiceapi.geeksforgeeks.org/api/latest/problems/submissions/${submission.submission_id}/`,
    { headers: { Cookie: process.env.GFG_COOKIE } }
  );

  e.code = response2.data.user_code;
}

console.log("Writing code");
for (const s of tqdm(submissionsDetails, tqdmOptions)) {
  const ext = extConverter[s.lang];
  const filename = `main.${ext}`;
  const dir = path.join(__dirname, "..", `${s.slug}`);
  if (!fs.existsSync(dir)) {
    fs.mkdirSync(dir, { recursive: true });
  }

  const file = path.join(dir, filename);
  fs.writeFileSync(file, s.code);
}
