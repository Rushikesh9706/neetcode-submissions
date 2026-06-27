class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int c = matrix[0].size();
        int row = matrix.size();

        for(int i = 0; i < row; i++){
            if(matrix[i][0] < target && matrix[i][c-1] >= target){
                int low = 0;
                int high = c-1;
                while (low <= high){
                    int mid = low + (high - low)/2;
                    if(matrix[i][mid] == target) return true;

                    if(matrix[i][mid] < target){
                        low = mid+1;
                    }

                    else high = mid - 1;
                }
            }
        }
        return false;

        
    }
};
