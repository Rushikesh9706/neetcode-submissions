class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        
        // Pass by const reference to avoid copying strings
        for (const string& ch : tokens) {
            
            // If the token is an operator, pop two elements and calculate
            if (ch == "+" || ch == "-" || ch == "*" || ch == "/") {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                
                if (ch == "+") st.push(b + a);
                else if (ch == "-") st.push(b - a);
                else if (ch == "*") st.push(b * a);
                else if (ch == "/") st.push(b / a);
            } 
            // If the token is NOT an operator, it must be a number
            else {
                st.push(stoi(ch));
            }
        }
        
        return st.top();
    }
};