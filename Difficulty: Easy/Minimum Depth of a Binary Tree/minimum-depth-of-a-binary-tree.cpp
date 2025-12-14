/* The Node structure is
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

class Solution {
  public:
    /*You are required to complete this method*/
    int minDepth(Node *root) {
        // Your code here
        if(!root)
        return 0;
        
      
        
        int left=minDepth(root->left);
        int right=minDepth(root->right);
        
        if(!root->left)
        return 1+right;
        if(!root->right)
        return 1+left;
        
        return 1+min(left,right);
        
    }
};