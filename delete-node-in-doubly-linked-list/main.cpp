/* Structure of Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/

class Solution {
  public:
    // Function to delete a node at given position.
    Node* deleteNode(Node* head, int x) {
        // Your code here
        
        Node *current = head;
        int i=1;
        while(i < x) {
            current = current->next;
            i++;
        }
        
        if(current == head) {
            // first
            head = current->next;
            head->prev = NULL;
            return head;
        }
        
        if(current->next == NULL) {
            // last
            current->prev->next = NULL;
            return head;
        }
        
        // cout<<current->data<<endl;
        
        current->prev->next = current->next;
        current->next->prev = current->prev;
        
        return head;
    }
};
