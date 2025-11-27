/*
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = NULL ;
    }
};
*/

class Solution {
  public:
    Node* reverseList(Node* head) {
        // code here
        Node*prev=NULL;
        Node*nextNode=NULL;
        Node*current=head;
        while(current)
        {
            nextNode=current->next;
            current->next=prev;
            prev=current;
            current=nextNode;
        }
        return prev;
    }
};