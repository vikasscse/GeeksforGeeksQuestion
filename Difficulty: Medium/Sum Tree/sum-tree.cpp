/*  Tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

// Should return true if tree is Sum Tree, else false
class Solution {
  public:
  int SumTree(Node*root,bool &ans)
  {
      if(!root)
      return 0;
      
      if(!root->left && !root->right) 
      return root->data;
      
      int left=SumTree(root->left,ans);
      int right=SumTree(root->right,ans);
      
      if(left+right!=root->data)
      ans=0;
      
      return root->data+left+right;
  }
    bool isSumTree(Node* root) {
        // Your code here
        bool ans=1;
        SumTree(root,ans);
        return ans;
    }
};