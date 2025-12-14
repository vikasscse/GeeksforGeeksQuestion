/*
class Node {
public:
    int data;
    Node *left, *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
  
    bool check(Node*p,Node*q)
    {
        if(!p && !q)
        return true;
        
        if((!p && q) || (p && !q))
        return false;
        
        if(p->data !=q->data)
        return false;
        
        return check(p->left,q->right) && check(p->right,q->left);
    }
    bool isSymmetric(Node* root) {
        // code here
        if(!root)
        return true;
        
        return check(root->left,root->right);
        
    }
};