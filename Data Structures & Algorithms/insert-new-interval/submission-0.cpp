class Solution {
private:
    vector<vector<int>> mi(vector<vector<int>> &in){
        sort(in.begin() , in.end());


        vector<vector<int>> res;
        if(in.size()==0) return res;
        res.push_back(in[0]);

        for(int i = 1 ;i < in.size(); i++){
            vector<int> &last = res.back();
            vector<int> &curr = in[i];

            if(last[1] >= curr[0]){
                last[1] = max(last[1], curr[1]);
            }
            else res.push_back(curr);
        }

        return res;
    }
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        return mi(intervals);
    }
};
