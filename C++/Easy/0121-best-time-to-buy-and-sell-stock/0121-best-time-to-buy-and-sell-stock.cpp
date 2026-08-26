class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int minprice=INT_MAX;
        for(int x:prices){
            if(x<minprice)
            minprice=x;
            else{
                profit=max(profit,x-minprice);
            }
        }
        return profit;
    }
};