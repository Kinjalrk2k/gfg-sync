/*Structure of the linked list node is as
struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        Node *new_node = new Node(x);
        
        if(head == NULL) {
            head = new_node;
            return head;
        }
        
        Node *current = head;
        while(current->next != NULL) current = current->next;
        current->next = new_node;
        
        return head;
    }
};

