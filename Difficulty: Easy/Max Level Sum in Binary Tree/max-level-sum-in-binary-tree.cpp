/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */

class Solution {
  public:
    /*You are required to complete below method */
    int maxLevelSum(Node* root) {
        // Your code here
        int maxSum=INT_MIN;
        
        if(!root) return 0;
        
        queue<Node*>q;
        q.push(root);
        
        while(!q.empty())
        {
            int size=q.size();
            int sum=0;
            
            while(size--)
            {
                Node*temp=q.front();
                q.pop();
                
                if(temp->left)
                q.push(temp->left);
                
                if(temp->right)
                q.push(temp->right);
                
                sum+=temp->data;
            }
            
            if(sum>maxSum)
            {
                maxSum=sum;
            }
        }
        return maxSum;
    }
};
