class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int n = prices.size();
       if(n<=1)
       return 0;
       int cash=0;
       int stock=-prices[0];
       for(int i =1;i<n;i++)
       {
           int t =cash;
           cash=max(cash,stock+prices[i]);
           stock = max(stock, t-prices[i]);
       } 
       return cash;
    }
};