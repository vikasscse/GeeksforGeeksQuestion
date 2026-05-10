/*
class Node
{
  public:
    int data;
    Node * next;
    Node (int x)
    {
        data=x;
        next=NULL;
    }

};
*/

class Solution {
  public:
    bool isSorted(Node* head) {
        // code here
        if (!head || !head->next) return true;
        bool isIncreasing = true;
        bool isDecreasing = true;
        Node* curr = head;
        while (curr->next) {
            if (curr->data > curr->next->data)
                isIncreasing = false;
            if (curr->data < curr->next->data)
                isDecreasing = false;
            curr = curr->next;
        }
    return isIncreasing || isDecreasing;
    }
};