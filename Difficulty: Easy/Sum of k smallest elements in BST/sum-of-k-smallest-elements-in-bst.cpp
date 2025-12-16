// User function Template for C++

/*
struct Node {
    int data;
    Node* right;
    Node* left;

    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
};
*/

// Function to find ceil of a given input in BST. If input is more
// than the max key in BST, return -1

void find(Node*root,int &k,int &total)
{
    
    if(!root || k<0) return;
    find(root->left,k,total);
    k--;
    if(k>=0)
    total+=root->data;
    
    find(root->right,k,total);
}
int sum(Node* root, int k) {

    // Your code here
    int total=0;
    find(root,k,total);
    return total;
}