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
    int find(Node*root,int&ans)
    {
        if(!root) return 0;
        
        int left=find(root->left,ans);
        int right=find(root->right,ans);
        ans=max(ans,left+right);
        return 1+max(left,right);
    }
    int diameter(Node* root) {
        // code here
        int ans=0;
        find(root,ans);
        return ans;
    }
};