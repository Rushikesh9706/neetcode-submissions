#include <string>
#include <unordered_set>
#include <algorithm>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> charSet;
        int max_count = 0;
        int left = 0;
        
        for (int right = 0; right < s.size(); right++) {
            // If we find a duplicate character, shrink the window from the left
            while (charSet.find(s[right]) != charSet.end()) {
                charSet.erase(s[left]);
                left++;
            }
            
            // Add the current character to the set
            charSet.insert(s[right]);
            
            // Update the max length found so far
            // (right - left + 1) gives us the size of the current valid window
            max_count = max(max_count, right - left + 1);
        }
        
        return max_count;
    }
};