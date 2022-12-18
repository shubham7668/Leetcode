class MyQueue {
public:
    stack<int> s1,s2;
    MyQueue() {
        //We will use 2 stacks s1,s2
        //and will use s2 as auxilary space
    }
    
    void push(int x) {
        //s1->s2
        while(!s1.empty()){ 
            s2.push(s1.top());
            s1.pop();
        }
        //push in s1
        s1.push(x);
        
        //s2->s1
        while(!s2.empty()){ 
            s1.push(s2.top());
            s2.pop();
        }
    }
    
    int pop() {
        int val=s1.top();
        s1.pop();
        return val;
    }
    
    int peek() {
        return s1.top();
    }
    
    bool empty() {
        return s1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */