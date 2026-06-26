class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;
        
        
        for(int i = 0; i < (int)nums.size()-2; i++){
            if (i > 0 && nums[i] == nums[i-1]) continue;
            int n = i+1;
            int m = nums.size()-1;
            while(m>n){
                if(nums[n]+nums[m]+nums[i]==0){
                    result.push_back({nums[i], nums[n], nums[m]}); 
                    while (n < m && nums[n] == nums[n+1]) n++;
                    while (n < m && nums[m] == nums[m-1]) m--;
                    n++; m--;               
                }
                else if(nums[n]+nums[m]+nums[i] > 0){
                    m--;
                }
                else if(nums[n]+nums[m]+nums[i] < 0){
                    n++;
                }
            }
        }
        return result;       
    }
};
