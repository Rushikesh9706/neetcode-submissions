#include <vector>
#include <algorithm>

/**
 * Definition of Interval:
 * class Interval {
 * public:
 * int start, end;
 * Interval(int start, int end) {
 * this->start = start;
 * this->end = end;
 * }
 * }
 */

class Solution {
public:
    bool canAttendMeetings(std::vector<Interval>& intervals) {
        // 1. Sort the intervals by their start times
        std::sort(intervals.begin(), intervals.end(), [](const Interval& a, const Interval& b) {
            return a.start < b.start;
        });

        // 2. Iterate through the sorted intervals
        // Starting at index 1 to safely check against the previous interval
        for (int i = 1; i < intervals.size(); i++) {
            
            // 3. If the previous meeting ends strictly after the current one starts, there is an overlap
            if (intervals[i - 1].end > intervals[i].start) {
                return false; 
            }
        }
        
        // 4. If we make it through the whole loop without returning false, we can attend all meetings
        return true; 
    }
};