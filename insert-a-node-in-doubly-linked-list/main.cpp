/* a Node of the doubly linked list
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

// Function to insert a new node at given position in doubly linked list.
class Solution {
  public:
    // Function to insert a new node at given position in doubly linked list.
    Node *addNode(Node *head, int pos, int data) {
        // code here
        Node *current = head;
        
        int i=0;
        while(i < pos) {
            current = current->next;
            i++;
        }
        
        // cout<<current->data<<endl;
        
        Node *new_node = new Node(data);
        new_node->next = current->next;
        if(current->next!=NULL) {
            current->next->prev = new_node;
        }
        current->next = new_node;
        new_node->prev = current;
        
        return head;
    }
};
