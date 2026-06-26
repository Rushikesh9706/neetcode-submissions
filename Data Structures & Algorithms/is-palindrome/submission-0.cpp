class Solution {
public:
    bool isPalindrome(string s) {
        string ns = "";
        for (char c : s) {
            if (isalnum(c)) {
                ns += tolower(c);
            }
        }

        int m = ns.size();
        int a = 0;
        int b = m-1;
        while(b>a){
            if(ns[b]!=ns[a]){
                return false;
            }
            a++;
            b--;
        }
        return true;
    }
};
