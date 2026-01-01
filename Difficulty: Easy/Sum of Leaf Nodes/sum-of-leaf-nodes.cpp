/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Function to return a list containing the level order traversal in spiral form.
class Solution {
  public:
  
  void Sum(Node*root,int&sum)
  {
      if(!root) return;
      
      if(!root->left && !root->right)
      sum+=root->data;
      
      Sum(root->left,sum);
      Sum(root->right,sum);
  }
    int leafSum(Node* root) {
        // code here
        int sum=0;
       Sum(root,sum);
        
        return sum;
    }
};