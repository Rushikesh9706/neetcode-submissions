class Solution {
public:
    int name(int a){
        int sum = 0;
        while(a>0){
            int b = a%10;
            sum += b*b;
            a = a/10;
        }
        return sum;
    }
    bool isHappy(int n) {
        vector<int> store;
        while(find(store.begin(),store.end(),n) == store.end()){
            store.push_back(n);
            n = name(n);
            if (n == 1) return true;
        }
        return false;
    }
};
