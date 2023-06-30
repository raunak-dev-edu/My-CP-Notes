// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/description/
/*
->Buy and sell stock II - You are given an integer array prices where prices[i] is the price of a given stock on the ith day.
On each day, you may decide to buy and/or sell the stock. You can only hold at most one share of the stock at any time. However, you can buy it then immediately sell it on the same day.
Find and return the maximum profit you can achieve.

// using recursion
int solve(int index, int buy, vector<int> & prices){
    if(index == prices.size())
        return 0;
    int profit =0;

    if(buy){
        int buyKaro = -prices[index] + solve(index+1,0, prices);
        int skipKaro = 0 + solve(index+1,1,prices);
        profit = max(buyKaro, skipKaro);
    }
    else{
        int sellKaro = prices[index] + solve(index+1,1, prices);
        int skipKaro = 0 + solve(index+1,0,prices);
        profit = max(sellKaro, skipKaro);
    }
    return profit;
}

//using recursion + memorization
int solveMem(int index, int buy, vector<int> & prices, vector<vector<int>> &dp){
    if(index == prices.size())
        return 0;
    int profit =0;

    if(dp[index][buy] != -1){
        return dp[index][buy];
    }
    if(buy){
        int buyKaro = -prices[index] + solveMem(index+1,0, prices, dp);
        int skipKaro = 0 + solveMem(index+1,1,prices, dp);
        profit = max(buyKaro, skipKaro);
    }
    else{
        int sellKaro = prices[index] + solveMem(index+1,1, prices, dp);
        int skipKaro = 0 + solveMem(index+1,0,prices, dp);
        profit = max(sellKaro, skipKaro);
    }
    return dp[index][buy] = profit;
}

// using tabulation || TC - O(n), SC - O(n)
int solveTab(vector<int>& prices){
    int n = prices.size();
    vector<vector<int>> dp(n+1,vector<int>(2,0));

    for(int index = n-1; index >=0; index--){
        for(int buy = 0; buy<=1; buy++){
            int profit =0;
            if(buy){
                int buyKaro = -prices[index] + dp[index+1][0];
                int skipKaro = 0 + dp[index+1][1];
                profit = max(buyKaro, skipKaro);
            }
            else{
                int sellKaro = prices[index] + dp[index+1][1];
                int skipKaro = 0 + dp[index+1][0];
                profit = max(sellKaro, skipKaro);
            }
            dp[index][buy] = profit;
        }
    }
    return dp[0][1];
}

// using space optimization
int solveOpt (vector<int>& prices){
    int n = prices.size();

    vector<int> curr(2,0);
    vector<int> next(2,0);

    for(int index = n-1; index >=0; index--){
        for(int buy = 0; buy<=1; buy++){
            int profit =0;
            if(buy){
                int buyKaro = -prices[index] + next[0];
                int skipKaro = 0 + next[1];
                profit = max(buyKaro, skipKaro);
            }
            else{
                int sellKaro = prices[index] + next[1];
                int skipKaro = 0 + next[0];
                profit = max(sellKaro, skipKaro);
            }
            curr[buy] = profit;
        }
        next = curr;
    }
    return next[1];
}

int maxProfit(vector<int>& prices) {
    // return solve(0,1, prices);

    // int n = prices.size();
    // vector<vector<int>> dp(n, vector<int>(2,-1));
    // return solveMem(0,1,prices,dp);

    // return solveTab(prices);

    return solveOpt(prices);
}


*/