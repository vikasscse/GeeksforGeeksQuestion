/*
class Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}; */

class Solution {
  public:
    int getMiddle(Node* head) {
        // code here
        Node*temp=head;
        int count=0;
        while(temp)
        {
           count++;
           temp=temp->next;
        }
        temp=head;
      int mid=(count/2)+1;
      while(mid>1){
          temp=temp->next;
          mid--;
      }
        return temp->data;
    }
};