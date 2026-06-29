/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {

        sort(intervals.begin(), intervals.end(), [](const Interval& a, const Interval& b) {
            return a.start < b.start;
        });
        vector<int> s;
        vector<int> e;

        int room = 0;
        for(int i = 0; i < intervals.size(); i++){
            s.push_back(intervals[i].start);
            e.push_back(intervals[i].end);
        }
        sort(s.begin(),s.end());
        sort(e.begin(),e.end());

        int i = 0;
        int j = 0;

        while(i < s.size() && j < e.size()){
            if(s[i] < e[j]){
                room++;
                i++;
            }
            else i++, j++; 
        }

        return room;
        
    }
};
