class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        for (char ch : s) {
            // 1. If it's an opening bracket, push to stack
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } 
            // 2. If it's a closing bracket...
            else {
                // If the stack is empty, there is no matching opening bracket
                if (st.empty()) {
                    return false;
                }
                
                char top = st.top();
                // If it matches the correct opening bracket, pop it
                if ((ch == ')' && top == '(') || 
                    (ch == '}' && top == '{') || 
                    (ch == ']' && top == '[')) {
                    st.pop();
                } 
                // Otherwise, it's a mismatch
                else {
                    return false;
                }
            }
        }
        
        // 3. If the stack is empty, all brackets were matched properly
        return st.empty();
    }
};