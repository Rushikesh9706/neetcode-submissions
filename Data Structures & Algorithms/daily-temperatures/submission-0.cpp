class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> result;
        int i = 0;
        int j = i+1;
        while(i<j && i < n && j < n){
            if(temperatures[i] < temperatures[j]){
                result.push_back(j-i);
                i++;
                if(i == n-1) result.push_back(0);
                j = i+1;
            }
            else if (temperatures[i] > temperatures[j]){
                if(j == n-1){
                    result.push_back(0);
                    i++;
                    if(i == n-1) result.push_back(0);
                    j = i+1;
                }
                else j++;
            }

        }
        return result;
        
    }
};
