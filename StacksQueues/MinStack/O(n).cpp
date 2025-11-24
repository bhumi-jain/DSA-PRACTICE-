class MinStack {
public:
stack<long long> sk;
long long mini;

    MinStack() {//constructor
    //Without constructor, mini would contain garbage value, because it is not automatically initialized during cross operations.
    mini=LLONG_MAX;
        
    }
    
    void push(int val) {
        if(sk.empty()){
            sk.push(val);
            mini=val;
        }else{

        
        if(val>=mini) sk.push(val);
        else{                           //wrong-[2 * val * 1LL] (u must covert before multiplying otherwise overflow b/f the long long value was multiplied by 2 which is integer but now 2*1LL after that 2LL* val bcz Left to right evaluation.
        
            sk.push(2LL * val - mini);      //need to enter modified value
            mini=val;                      //1LL is long long constant
                                    //so result don't overflow
        }
        }
        
    }
    
    void pop() {
        if(sk.empty())return;
        if(sk.top()<mini){      //modified value inserted
        long long el= sk.top();
            mini=2*mini-el;
            sk.pop();
        }
        else{
            sk.pop();
        }
        
    }
    
    int top() {
     long long x= sk.top();
        if(x>=mini) return x;
        else return mini;
        
    }
    
    int getMin() {
        return mini;
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */