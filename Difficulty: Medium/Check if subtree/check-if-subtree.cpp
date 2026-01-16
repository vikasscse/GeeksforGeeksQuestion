/* A binary tree node

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
  
  bool sameTree(Node*a,Node*b)
  {
      if(!a && !b) return true;
      if(!a || !b) return false;
      if(a->data != b->data) return false;
      
      return sameTree(a->left,b->left) && sameTree(a->right,b->right);
  }
    // Function to check if S is a subtree of tree T.
    bool isSubTree(Node* T, Node* S) {
        // Your code here
        if(!T) return false;
        if(!S) return true;
        
        if(sameTree(T,S)) return true;
        
        return isSubTree(T->left,S) || isSubTree(T->right,S);
        
    }
};