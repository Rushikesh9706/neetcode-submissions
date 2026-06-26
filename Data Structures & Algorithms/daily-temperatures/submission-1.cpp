class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        // Initialize the result array with 0s. 
        // This automatically handles days that never get warmer.
        vector<int> result(n, 0);
        
        // The stack will store the *indices* of the temperatures, not the temperatures themselves.
        stack<int> st; 
        
        for (int i = 0; i < n; i++) {
            // While the stack isn't empty AND the current day's temperature 
            // is greater than the temperature of the day at the top of the stack...
            while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
                int prevDayIndex = st.top();
                st.pop();
                
                // The number of days we waited is the current index minus the previous index
                result[prevDayIndex] = i - prevDayIndex;
            }
            
            // Push the current day's index onto the stack to wait for a warmer day
            st.push(i);
        }
        
        return result;
    }
};