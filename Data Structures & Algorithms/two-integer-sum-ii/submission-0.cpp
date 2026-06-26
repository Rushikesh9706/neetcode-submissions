class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        vector<int> result;
        int x = 0;
        int y = n-1;

        while(y>x){
            if(numbers[x]+numbers[y]==target){
                result.push_back(x+1);
                result.push_back(y+1);
                return result;
            }

            else if(numbers[x]+numbers[y] > target){
                y--;
            }
            else if(numbers[x]+numbers[y] < target){
                x++;
            }
        }
        
    }
};
