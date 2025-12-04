/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
  void PostOrder(Node*root,vector<int>&ans)
  {
      if(!root) return;
      PostOrder(root->left,ans);
      PostOrder(root->right,ans);
      ans.push_back(root->data);
  }
    vector<int> postOrder(Node* root) {
        // code here
        vector<int>ans;
        PostOrder(root,ans);
        return ans;
    }
};