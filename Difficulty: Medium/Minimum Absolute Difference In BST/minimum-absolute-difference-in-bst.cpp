/*The Node structure is defined as
struct Node {
    int data;
    Node *left;
    Node *right;

};
*/

class Solution {
  public:
  
  void inorder(Node*root,int&temp,int&ans)
  {
      if(!root) return;
      
      inorder(root->left,temp,ans);
      
      if(temp!=-1)
      {
          ans=min(ans,root->data-temp);
      }
      temp=root->data;
      
      inorder(root->right,temp,ans);
  }
    int absolute_diff(Node *root) {
        // Your code here
        int ans=INT_MAX;
        int temp=-1;
        inorder(root,temp,ans);
        return ans;
    }
};
