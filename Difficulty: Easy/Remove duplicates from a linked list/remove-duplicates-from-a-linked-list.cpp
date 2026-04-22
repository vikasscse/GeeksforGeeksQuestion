/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution {
  public:
    Node *removeDuplicates(Node *head) {
        // your code goes here
        if (!head) return head;

    unordered_set<int> st;
    Node* curr = head;
    Node* prev = NULL;

    while (curr != NULL) {
        if (st.find(curr->data) != st.end()) {
            // duplicate → delete
            prev->next = curr->next;
            delete curr;
            curr = prev->next;
        } else {
            st.insert(curr->data);
            prev = curr;
            curr = curr->next;
        }
    }
    return head;
    }
};