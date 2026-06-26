class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        // Traverse the array from the end
        for(int i = n - 1; i >= 0; i--) {
            // If the digit is less than 9, just add 1 and we are done!
            if(digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            
            // If the digit is 9, it becomes 0. 
            // The loop will naturally move to the next digit to add the carry.
            digits[i] = 0;
        }
        
        // If we finish the loop, it means ALL digits were 9 (e.g., 999 -> 000).
        // We need an extra 1 at the front of the array (to make it 1000).
        digits.insert(digits.begin(), 1);
        
        return digits;
    }
};