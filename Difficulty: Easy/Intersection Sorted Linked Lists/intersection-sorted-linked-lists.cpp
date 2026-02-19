/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution {
public:
    Node* findIntersection(Node* head1, Node* head2) {
        
        Node* p1 = head1;
        Node* p2 = head2;
        
        Node* dummy = new Node(0);
        Node* tail = dummy;
        
        while(p1 != NULL && p2 != NULL) {
            
            if(p1->data == p2->data) {
                tail->next = new Node(p1->data);
                tail = tail->next;
                
                p1 = p1->next;
                p2 = p2->next;
            }
            else if(p1->data < p2->data) {
                p1 = p1->next;
            }
            else {
                p2 = p2->next;
            }
        }
        
        return dummy->next;
    }
};
