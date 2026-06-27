class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        
        // Base cases
        if (n == 0) return 0;
        if (n == 1) return nums[0];
        if (n == 2) return max(nums[0], nums[1]);

        // Scenario 1: Rob from house 0 to n-2 (exclude last house)
        int max1 = robLinear(nums, 0, n - 2);
        
        // Scenario 2: Rob from house 1 to n-1 (exclude first house)
        int max2 = robLinear(nums, 1, n - 1);

        // Return the maximum of the two scenarios
        return max(max1, max2);
    }

private:
    // This is the exact same logic from House Robber I
    int robLinear(vector<int>& nums, int start, int end) {
        int rob1 = 0; 
        int rob2 = 0; 

        for (int i = start; i <= end; i++) {
            int currentMax = max(nums[i] + rob1, rob2);
            rob1 = rob2;
            rob2 = currentMax;
        }

        return rob2;
    }
};