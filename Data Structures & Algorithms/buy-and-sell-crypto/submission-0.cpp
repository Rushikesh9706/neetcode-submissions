class Solution {
    public:
        int maxProfit(vector<int>& prices){
            int n = prices.size();
            int l = 0;
            int r = l+1;
            int max_profit = 0;
            while(l < n-1){
                int profit = 0;
                profit = prices[r]-prices[l];
                max_profit = max(max_profit , profit);
                r++;
                if(r==n){
                    l++;
                    r = l+1;
                }
            }

            return max_profit;
        
    }

        
};