/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */

class Solution {
  public:
  
  void findsum(Node*root,long long &sum,long long num)
    {
        if(!root) return;
        num=num*10+root->data;

        if(root->left==nullptr && root->right==nullptr)
        {
            sum+=num;
            return;
        }

        findsum(root->left,sum,num);
        findsum(root->right,sum,num);
    }
    int treePathsSum(Node *root) {
        // code here.
        long long sum=0;
        long long num=0;
        findsum(root,sum,num);
        return sum;
    }
};