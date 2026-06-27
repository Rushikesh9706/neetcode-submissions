class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for (int i = 0; i<n-1; i++){
            if(nums[i]!=nums[i+1]){
                count++;

            }
        }
        if(count < n-1) return true;
        else return false;
        
    }
};