/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = NULL;
    }
};
*/

class Solution {
  public:
    bool isPalindrome(Node *head) {
        //  code here
        if(head->next==NULL) return 1;
        Node*first=head,*second=head;
        int count=0;
        while(first)
        {
            count++;
            first=first->next;
        }
        int count_first=(count+1)/2-1;
        while(count_first--){
            second=second->next;
        }
        first=second->next;
        second->next=NULL;
        Node*prev=NULL;
        while(first){
            Node*Next=first->next;
            first->next=prev;
            prev=first;
            first=Next;
        }
        second=head;
        first= prev;
        while(first){
            if(first->data!=second->data) return 0;
            first=first->next;
            second=second->next;
        }
        return 1;
    }
};