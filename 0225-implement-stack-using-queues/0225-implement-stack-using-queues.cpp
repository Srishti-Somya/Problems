class MyStack {
    queue<int>q;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
        return;
    }
    
    int pop() {
        vector<int>temp;
        while(!q.empty()){
            temp.push_back(q.front());
            q.pop();
        }
        int n = temp.size()-1, i = 0;
        while(i < n){
            q.push(temp[i]);
            i++;
        }
        return temp[n];
    }
    
    int top() {
        return q.back();
    }
    
    bool empty() {
        return q.empty();
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