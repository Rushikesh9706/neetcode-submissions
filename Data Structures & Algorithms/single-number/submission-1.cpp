class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        
        // XOR all numbers in the array together
        for(int num : nums) {
            result ^= num; 
        }
        
        return result;
    }
};