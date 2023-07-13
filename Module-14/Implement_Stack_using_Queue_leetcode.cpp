class MyStack {
public:
    queue<int> q;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        queue<int> myQ;
        int last;
        while(!q.empty())
        {
            int k=q.front();
            q.pop();
            if(q.empty())
            {
                last=k;
                break;
            }
            myQ.push(k);
        }
        q=myQ;
        return last;
    }
    
    int top() {
        queue<int> myQ;
        int last;
        while(!q.empty())
        {
            int k=q.front();
            q.pop();
            if(q.empty())
            {
                last=k;
            }
            myQ.push(k);
        }
        q=myQ;
        return last;
    }
    
    bool empty() {
        return q.empty();
    }
};