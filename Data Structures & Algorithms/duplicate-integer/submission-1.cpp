class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
     unordered_map <int ,int> um;
     int count = 0;
     for(int i : nums){
        um[i]++;
        if(um[i]>count){
            count = um[i];
        }
     }
     if(count>1) return true;
     else return false;

    }
};