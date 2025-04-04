class CustomStack {
public:
    stack<int> stack;
    vector<int> inc;
    int maxSize;
    CustomStack(int maxSize) {
        this->maxSize = maxSize;
    }
    
    void push(int x) {
        if (stack.size() < maxSize) {
            stack.push(x);
            inc.push_back(0);
        }
    }
    
    int pop() {
        if (stack.empty()) return -1;
        if (inc.size() > 1) inc[inc.size() - 2] += inc.back();
        int res = stack.top() + inc.back();
        stack.pop();
        inc.pop_back();
        return res;
    }
    
    void increment(int k, int val) {
        if (!stack.empty()) {
            int idx = min(k, (int)inc.size()) - 1;
            inc[idx] += val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */