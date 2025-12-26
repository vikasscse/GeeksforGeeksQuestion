/*
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    void mirror(Node* root) {
        // code here
        vector<int>ans;
        
        if(!root) return;
        Node*temp=root->left;
        root->left=root->right;
        root->right=temp;
        
       ans.push_back(root->data);
        mirror(root->left);
        mirror(root->right);
        
      
    }
};