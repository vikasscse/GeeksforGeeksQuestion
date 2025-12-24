/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> leftView(Node *root) {
        // code here
         queue<Node*>q;
        vector<int>ans;
        if(!root) return ans;
        
        q.push(root);
        
        while(!q.empty())
        {
            int size=q.size();
            bool flag=false;
            
            while(size--)
            {
                Node*temp=q.front();
                q.pop();
                
                if(!flag)
                {
                ans.push_back(temp->data);
                flag=true;
                }
                
                if(temp->left)
                q.push(temp->left);
                
                if(temp->right)
                q.push(temp->right);
            }
        }
        return ans;
    }
};