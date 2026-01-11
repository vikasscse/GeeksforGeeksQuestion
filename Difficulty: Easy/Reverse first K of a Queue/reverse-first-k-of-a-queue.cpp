class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        // code here
        stack<int>s;
        queue<int>q2;
        if(q.size()<k) return q;
        
       while(k--)
       {
           s.push(q.front());
           q.pop();
       }
       
       while(!q.empty())
       {
           q2.push(q.front());
           q.pop();
       }
       
       while(!s.empty())
       {
           q.push(s.top());
           s.pop();
       }
       while(!q2.empty())
       {
           q.push(q2.front());
           q2.pop();
       }
       return q;
        
    }
};