class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char,int> um;
        for (auto i : s){
            um[i]++;
        }
        for (auto i : t){
            um[i]++;
        }
        for(auto k : um){
            if((k.second % 2)==1) return false;
            else return true;
        }
        
    }
};
