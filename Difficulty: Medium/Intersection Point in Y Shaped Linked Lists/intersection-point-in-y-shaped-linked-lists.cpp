/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution {
  public:
    Node* intersectPoint(Node* head1, Node* head2) {
        // Your Code Here
        Node*temp1=head1;
        Node*temp2=head2;
        int count1=0;
        int count2=0;
        while(temp1!=NULL)
        {
            count1++;
            temp1=temp1->next;
        }
        while(temp2!=NULL)
        {
            count2++;
            temp2=temp2->next;
        }
        temp1=head1;
        temp2=head2;
        if(count1>count2)
        {
            int diff=count1-count2;
            while(diff){
            temp1=temp1->next;
            diff--;
            }
        }
        else
        {
            int diff=count2-count1;
            while(diff){
            temp2=temp2->next;
            diff--;
            }
        }
        while(temp1!=NULL && temp2!=NULL)
        {
            if(temp1==temp2)
            return temp1;
            temp1=temp1->next;
            temp2=temp2->next;
        }
       return NULL;
        
    }
};
