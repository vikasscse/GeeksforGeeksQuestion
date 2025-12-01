/*
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* addTwoLists(Node* head1, Node* head2) {
        // code here
        Node*temp1=head1;
        Node*temp2=head2;
        Node*prev1=NULL;
        Node*prev2=NULL;
        while(temp1)
        {
            Node*Next=temp1->next;
            temp1->next=prev1;
            prev1=temp1;
            temp1=Next;
        }
        while(temp2)
        {
            Node*Next=temp2->next;
            temp2->next=prev2;
            prev2=temp2;
            temp2=Next;
        }
        temp1=prev1;
        temp2=prev2;
        Node*ans=new Node(0);
        Node*temp3=ans;
        int sum=0,carry=0;
        while(temp1 && temp2)
        {
            sum=(temp1->data+temp2->data+carry)%10;
            carry=(temp1->data+temp2->data+carry)/10;
            temp3->data=sum;
            temp1=temp1->next;
            temp2=temp2->next;
            if(temp1 || temp2 || carry) temp3->next=new Node(0);
            temp3=temp3->next;
        }
        while(temp1)
        {
            sum=(temp1->data+carry)%10;
            carry=(temp1->data+carry)/10;
            temp3->data=sum;
            temp1=temp1->next;
            if(temp1 || carry) temp3->next=new Node(0);
            temp3=temp3->next;
        }
         while(temp2)
        {
            sum=(temp2->data+carry)%10;
            carry=(temp2->data+carry)/10;
            temp3->data=sum;
            temp2=temp2->next;
            if(temp2 || carry) temp3->next=new Node(0);
            temp3=temp3->next;
        }
        if(carry!=0) temp3->data=carry;
        
        temp3=ans;
        Node*prev3=NULL;
        while(temp3){
            Node*Next=temp3->next;
            temp3->next=prev3;
            prev3=temp3;
            temp3=Next;
        }
       while(prev3->data==0)
       {
           prev3=prev3->next;
       }
        return prev3;
    }
};