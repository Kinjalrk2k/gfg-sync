// User function Template for C++

/*class Node {
public:
    int data;
    Node* next;

    // Default constructor
    Node()
    {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};*/

class Solution {
  public:
    Node* constructLL(vector<int>& arr) {
        // code here
        Node *head = NULL, *current;
        for(auto e: arr) {
            Node *new_node = new Node(e);
            if(head == NULL) {
                head = new_node;
                current = new_node;
            }
            else {
                current->next = new_node;
                current = current->next;
            }
        }
        
        return head;
    }
};
