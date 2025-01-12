class Solution {
public:
    bool canBeValid(string s, string locked) {
        int n = s.size();
        if(n%2 != 0)
        {
            return 0;
        }
        stack<int>open_close;
        stack<int>open_stack;
        for(int i = 0 ; i < s.size() ; i++ ){
            if(locked[i] == '0'){
                open_close.push(i);
            }
            else if(s[i] == '('){
                open_stack.push(i);
            }
            else if( s[i] == ')'){
                if(!open_stack.empty()){
                    open_stack.pop();
                }
                else if(!open_close.empty()){
                    open_close.pop();
                }
                else {
                    return false;
                }
            }
            
        }
        while(!open_stack.empty() && !open_close.empty() && open_stack.top() < open_close.top())
            {
                open_stack.pop();
                open_close.pop();
            }
        if(open_stack.empty())
        {
            return true;
        }
        return false;
    }
};