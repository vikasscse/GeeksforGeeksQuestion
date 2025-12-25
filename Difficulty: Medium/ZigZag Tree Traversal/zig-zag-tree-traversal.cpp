/*
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    vector<int> zigZagTraversal(Node* root) {
        // code here
        vector<int>ans;
            int dir=0;
             queue<Node*>q;
            if(!root) return ans;
            q.push(root);
    
        while(!q.empty())
        {
            int size=q.size();
            stack<Node*>s;

            if(dir==0)
            {
                while(size--)
                {
                    Node*temp=q.front();
                    q.pop();
                    
                    if(temp->left)
                    s.push(temp->left);

                    if(temp->right)
                    s.push(temp->right);

                    ans.push_back(temp->data);

                }
                dir=1;
                
            }
            
            else
            {
                while(size--)
                {
                    Node*temp=q.front();
                    q.pop();

                    if(temp->right)
                    s.push(temp->right);
                        
                    if(temp->left)
                    s.push(temp->left);

                    ans.push_back(temp->data);

                }
                dir=0;
            }

             while(!s.empty())
                {
                    q.push(s.top());
                    s.pop();
                }
            
        } 
        return ans; 
    }
};