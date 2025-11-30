/* Link list Node:

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

// Deletes middle of linked list and returns head of the modified list
class Solution {
  public:
    Node* deleteMid(Node* head) {
        // Your Code Here
        if(head==NULL || head->next==NULL) return NULL;
        Node*temp=head;
        int count=0;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        temp=head;
        if(count%2==0)
        {
            int mid=count/2;
            while(mid>1)
            {
                temp=temp->next;
                mid--;
            }
            Node*del=temp->next;
            temp->next=del->next;
            delete del;
        }
        if(count%2==1)
        {
            int mid=count/2;
            while(mid>1)
            {
                temp=temp->next;
                mid--;
            }
            Node*del=temp->next;
            temp->next=del->next;
            delete del;
        }
        return head;
    }
};