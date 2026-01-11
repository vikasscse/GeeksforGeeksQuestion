class myStack {
    

  public:
    queue<int>q1;
    queue<int>q2;

    void push(int x) {
        // Inserts an element x at the top of the stack
        if(q1.empty())
        {
            q1.push(x);
            
            while(!q2.empty())
            {
                q1.push(q2.front());
                q2.pop();
            }
        }
        else
        {
            q2.push(x);
            
            while(!q1.empty())
            {
                q2.push(q1.front());
                q1.pop();
            }
        }
    }

    void pop() {
        // Removes an element from the top of the stack
        if(q1.empty() && q2.empty()) return;
        
        if(q1.empty())
        {
            int data=q2.front();
            q2.pop();
            
        }
        else
        {
            int data=q1.front();
            q1.pop();
        }
    }

    int top() {
        
        // If stack is empty, return -1
        if(q1.empty() && q2.empty()) return -1;
        
        // Returns the top element of the stack
        if(q1.empty())
        {
            int data=q2.front();
            return data;
        }
        else
        {
            int data=q1.front();
            return data;
        }
        
    }

    int size() {
        // Returns the current size of the stack
        return q1.size()+q2.size();
    }
};
