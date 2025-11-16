class MyStack {
public:
    queue<int> q1;
    queue<int> q2;
    MyStack() {//constructor   
    }
    void push(int x) {//O(n)
        //3 steps
        //s-1
        while(!q1.empty()){
             q2.push(q1.front()); // all elements goes to q1
             q1.pop();
        }
        //s-2
        q1.push(x);
        //s-3  
        //again all elements of q2 to q1
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        }

    int pop() {
        int ans=q1.front();
        q1.pop();  // since need to delete also
        return ans;    
    } 
    int top() {
        return q1.front();  //just want to show not to delete    
    } 
    bool empty() {
        return q1.empty(); //it's inbuild function returns true or false
        
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */