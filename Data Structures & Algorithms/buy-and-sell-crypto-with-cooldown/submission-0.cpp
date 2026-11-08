class Solution {
public:
    int dp[5005][2];
    int solve(vector<int>& prices , int pos , bool bought){
        if(pos>=prices.size())return 0;
        if(dp[pos][bought]!=-1) return dp[pos][bought];

        int ans =0;

        if(bought){
            int op1 = solve(prices , pos+1 , true); // skip
            int op2 = solve(prices , pos+2 , false) + prices[pos] ; // sell
            ans = max(op1 , op2);
        }else{
            int op1 = solve(prices , pos+1 , true) - prices[pos]; // buy
            int op2 = solve(prices , pos+1 , false); //skip
            ans = max(op1 , op2);
        }
        return dp[pos][bought]=ans;
    }

    int maxProfit(vector<int>& prices) {
        for(int i=0;i<5005;i++){
            dp[i][0]=-1;
            dp[i][1]=-1;
        }
        return solve(prices,0,false);
    }
};
