// User function Template for C++

/*
class Node{
public:
    Node* prev;
    int data;
    Node* next;

    Node()
    {
        prev = NULL;
        data = 0;
        next = NULL;
    }

    Node(int value)
    {
        prev = NULL;
        data = value;
        next = NULL;
    }
};*/

class Solution {
  public:
    Node* constructDLL(vector<int>& arr) {
        // code here
        Node *head = NULL, *current;
        
        for(auto e: arr) {
            Node *new_node = new Node(e);
            if(head == NULL) {
                head = new_node;
                current = new_node;
            } else {
                current->next = new_node;
                new_node->prev = current;
                current = current->next;
            }
        }
        
        return head;
    }
};
