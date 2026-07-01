class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string , vector<string>> str;

        for(string s : strs){
            string sorted = s;
            sort(sorted.begin() , sorted.end());
            str[sorted].push_back(s);
        }
        vector<vector<string>> r;
        for(auto& t : str){
            r.push_back(t.second);
        }
        return r;
        
    }
};