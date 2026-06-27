class Solution {
public:
    int rob(vector<int>& nums) {
        int rob1 = 0; // Max money robbed up to the house BEFORE the previous one
        int rob2 = 0; // Max money robbed up to the previous house

        // [rob1, rob2, n, n+1, ...]
        for (int i = 0; i < nums.size(); i++) {
            // Calculate the max we can get if we are at house 'i'
            int currentMax = max(nums[i] + rob1, rob2);
            
            // Shift our variables forward for the next iteration
            rob1 = rob2;
            rob2 = currentMax;
        }

        return rob2;
    }
};