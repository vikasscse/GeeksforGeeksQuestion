/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    // Function to remove duplicates from sorted linked list.
    Node* removeDuplicates(Node* head) {

        // code here
        if(head==NULL) return NULL;
        Node*temp=head;
        while(temp && temp->next){
            if(temp->data==temp->next->data){
                Node*dummy=temp->next;
                temp->next=temp->next->next;
                delete dummy;
            }
            else{
                temp=temp->next;
            }
        }
        return head;
    }
};