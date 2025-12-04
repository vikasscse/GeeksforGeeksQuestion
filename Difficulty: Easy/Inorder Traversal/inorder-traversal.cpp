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
  void Inorder(Node* root,vector<int>&ans)
  {
      if(!root) return;
      Inorder(root->left,ans);
      ans.push_back(root->data);
      Inorder(root->right,ans);
  }
    vector<int> inOrder(Node* root) {
        // code here
        vector<int>ans;
        Inorder(root,ans);
        return ans;
    }
};