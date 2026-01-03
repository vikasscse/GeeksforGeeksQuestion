class myQueue {

  public:
  stack<int>s1,s2;
  
    myQueue() {
        // Initialize your data members
    }

    void enqueue(int x) {
        // Implement enqueue operation
        s1.push(x);
    }

    void dequeue() {
        // Implement dequeue operation
        if(s2.empty())
        {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        if(!s2.empty()) 
        {
        s2.pop();
         }
    }

    int front() {
        // Implement front operation
        
        if(s1.empty() && s2.empty())\
        return -1;
        if(s2.empty())
        {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
    }

    int size() {
        // Implement size operation
         return s1.size()+s2.size();
    }
};
