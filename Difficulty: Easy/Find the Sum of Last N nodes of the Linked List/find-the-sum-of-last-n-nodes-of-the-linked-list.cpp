class Solution {
  public:
    /*Structure of the node of the linled list is as

    struct Node {
        int data;
        struct Node* next;

        Node(int x){
            data = x;
            next = NULL;
        }
    };
    */
    // your task is to complete this function
    // function should return sum of last n nodes
    int sumOfLastN_Nodes(struct Node* head, int n) {
        // Code here
        int count=0;
        Node*temp=head;
        while(temp)
        {
            count++;
            temp=temp->next;
        }
        int diff=count-n;
        temp=head;
        while(diff--)
        {
            temp=temp->next;
        }
        int sum=0;
        while(temp)
        {
            sum=sum+temp->data;
            temp=temp->next;
        }
        return sum;
    }
};