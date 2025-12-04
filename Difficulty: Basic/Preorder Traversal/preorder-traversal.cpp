/*
class Node
{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
  void PreOrder(Node*root,vector<int>&ans)
  {
      if(!root) return;
      ans.push_back(root->data);
      PreOrder(root->left,ans);
      PreOrder(root->right,ans);
  }
    vector<int> preOrder(Node* root) {
        // code here
        vector<int>ans;
        PreOrder(root,ans);
        return ans;
    }
};