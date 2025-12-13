/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/
class Solution {
  public:
  
  void PreOrder(Node*root,vector<int>&ans,int level)
  {
      if(!root)
      return;
      
      if(level%2==1)
      {
          ans.push_back(root->data);
      }
      PreOrder(root->left,ans,level+1);
      PreOrder(root->right,ans,level+1);
  }
    vector<int> nodesAtOddLevels(Node *root) {
        // code here
        int level=1;
        vector<int>ans;
        PreOrder(root,ans,level);
        return ans;
    }
};