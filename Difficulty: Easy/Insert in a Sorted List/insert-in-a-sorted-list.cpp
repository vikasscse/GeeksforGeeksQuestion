/*
structure of the node of the list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* sortedInsert(Node* head, int key) {
        
        Node* newNode = new Node(key);   // 👈 Sabse upar declare
        
        // Case 1: Empty list
        if(head == NULL) {
            return newNode;
        }
        
        // Case 2: Insert before head
        if(key < head->data) {
            newNode->next = head;
            return newNode;
        }
        
        // Case 3: Insert in middle or end
        Node* curr = head;
        
        while(curr->next != NULL && curr->next->data < key) {
            curr = curr->next;
        }
        
        newNode->next = curr->next;
        curr->next = newNode;
        
        return head;
    }
};
