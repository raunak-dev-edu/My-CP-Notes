// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/
/*
->Buy and sell stock with Transaction Fee - You are given an array prices where prices[i] is the price of a given stock on the ith day, and an integer fee representing a transaction fee.
Find the maximum profit you can achieve. You may complete as many transactions as you like, but you need to pay the transaction fee for each transaction.
Note: You may not engage in multiple transactions simultaneously (i.e., you must sell the stock before you buy again). The transaction fee is only charged once for each stock purchase and sale.

// using space optimization  from prev ques - buy sell 2
int solveOpt (vector<int>& prices,int fee){
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
                int sellKaro = prices[index] + next[1]-fee;
                int skipKaro = 0 + next[0];
                profit = max(sellKaro, skipKaro);
            }
            curr[buy] = profit;
        }
        next = curr;
    }
    return next[1];
}

int maxProfit(vector<int>& prices, int fee) {
    
    return solveOpt(prices, fee);
}


*/