#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> um;
        
        // 1. Count frequencies
        for (int i : nums) {
            um[i]++;
        }
        
        // 2. Create buckets where the index is the frequency.
        // The maximum possible frequency is nums.size(), so we size it nums.size() + 1
        vector<vector<int>> buckets(nums.size() + 1);
        for (auto j : um) {
            // j.second is the frequency, j.first is the number
            buckets[j.second].push_back(j.first);
        }
        
        // 3. Gather the top k elements by reading the buckets from right to left
        vector<int> store;
        for (int i = buckets.size() - 1; i >= 0 && store.size() < k; i--) {
            for (int num : buckets[i]) {
                store.push_back(num);
                if (store.size() == k) {
                    return store;
                }
            }
        }
        
        return store;
    }
};