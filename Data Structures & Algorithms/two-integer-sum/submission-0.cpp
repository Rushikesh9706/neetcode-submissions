class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap; // Maps the number to its index
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            
            // If the complement is already in the map, we found a match
            if (numMap.find(complement) != numMap.end()) {
                return {numMap[complement], i};
            }
            
            // Otherwise, add the current number and its index to the map
            numMap[nums[i]] = i;
        }
        
        return {}; // Return empty vector if no solution is found
    }
};