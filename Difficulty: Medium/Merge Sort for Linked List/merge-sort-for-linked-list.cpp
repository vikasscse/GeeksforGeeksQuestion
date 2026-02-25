/*
class Node {
public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
  
    Node*merge(Node*left,Node*right)
    {
        Node dummy(0);
        Node*temp=&dummy;
        while(left && right)
        {
            if(left->data < right->data)
            {
                temp->next=left;
                left=left->next;
            }
            else
            {
                temp->next=right;
                right=right->next;
            }
            temp=temp->next;
        }
        if(left) temp->next=left;
        if(right) temp->next=right;
        return dummy.next;
    }
    Node* mergeSort(Node* head) {
        // code here
        if(!head || !head->next)
        return head;
        
        Node*slow=head;
        Node*fast=head->next;
        
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        Node*mid=slow->next;
        slow->next=NULL;
        Node*left=mergeSort(head);
        Node*right=mergeSort(mid);
        return merge(left,right);
    }
};