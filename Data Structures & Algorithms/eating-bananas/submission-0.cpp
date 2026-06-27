class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        int n = piles.size();
        int min = n;
        if(min == h){
            return piles[n-1];
        }

        int low = 0;
        int high = n-1;
        int rate = 0;

        while(low <= high){
            int mid = low + (high - low)/2;
            int total = 0;
            int k = piles[mid];
            for(int m : piles){
                if(m <= k) total++;
                if(m > k){
                    if(m % k == 0) total = total + m/k;
                    else total = total + (m/k)+1;
                }
            }
            if(total > h){
                low = mid+1;
            }

            else {
                rate = k;
                high = mid-1;
            }
        }
        return rate;
    }
};
