/*

Definition for Binary Tree Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
  
    void solve(Node*root,vector<vector<int>>&ans,vector<int>level)
    {
        if(!root) return;
        
        level.push_back(root->data);
        
        if(!root->left && !root->right)
        {
            ans.push_back(level);
            return;
        }
        solve(root->left,ans,level);
        solve(root->right,ans,level);
    }
    vector<vector<int>> Paths(Node* root) {
        // code here
        vector<vector<int>>ans;
        vector<int>level;
        solve(root,ans,level);
        return ans;
    }
};