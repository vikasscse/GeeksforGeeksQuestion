/* Below global variable is declared in code for modulo arithmetic
const long long unsigned int MOD = 1000000007; */

/* Link list Node/
struct Node
{
    bool data;   // NOTE data is bool
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}; */

class Solution {
  public:
    // Should return decimal equivalent modulo 1000000007 of binary linked list
    long long unsigned int decimalValue(Node *head) {
        // Your Code Here
        const long long MOD = 1000000007;
        long long ans = 0;
        while(head) {
            ans = (ans * 2 + head->data)%MOD;
            head = head->next;
        }
        return ans;
    }
};