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
    Node* intersectPoint(Node* head1, Node* head2) {
        //  Code Here
        int count1=0;int count2=0;
        Node* temp1=head1;
        Node* temp2=head2;
        while(temp1)
        {
            count1++;
            temp1=temp1->next;
        }
        while(temp2)
        {
            count2++;
            temp2=temp2->next;
        }
        temp1=head1;
        temp2=head2;
        int diff=abs(count1-count2);
        if(count1>count2)
        {
            while(diff--)
            {
                temp1=temp1->next;
            }
        }
        else
        {
            while(diff--)
            {
                temp2=temp2->next;
            }
        }
        while(temp1!=temp2)
        {
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return temp1;
    }
};