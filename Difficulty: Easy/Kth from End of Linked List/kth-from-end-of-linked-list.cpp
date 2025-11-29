/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        // code here
        Node*temp=head;
        int count=0;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        if(count<k) return -1;
        temp=head;
            int diff=count-k;
            while(diff>0)
            {
                temp=temp->next;
                diff--;
            }
        
        return temp->data;
    }
};