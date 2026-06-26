#include <vector>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        // Initialize our result array with 1s. 
        // This will eventually hold our final answers.
        vector<int> result(n, 1);
        
        // Step 1: Calculate the LEFT products and store them in result.
        // We keep a running total of the product of elements to the left.
        int leftProduct = 1;
        for (int i = 0; i < n; i++) {
            result[i] = leftProduct;
            leftProduct = leftProduct * nums[i];
        }
        
        // Step 2: Calculate the RIGHT products and multiply them into result.
        // We go backwards, keeping a running total of the product to the right.
        int rightProduct = 1;
        for (int i = n - 1; i >= 0; i--) {
            // result[i] already has the left product. 
            // We multiply it by the right product.
            result[i] = result[i] * rightProduct;
            rightProduct = rightProduct * nums[i];
        }
        
        return result;
    }
};