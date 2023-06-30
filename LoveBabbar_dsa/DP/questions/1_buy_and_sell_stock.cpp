// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
/*
->Buy and Sell Stock - You are given an array prices where prices[i] is the price of a given stock on the ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

// using brute force TC - O(n), SC _ O(1)
int maxProfit(vector<int>& prices) {
    int mini = prices[0];
    int profit =0;
    for(int i =1; i<prices.size(); i++){
        int diff = prices[i] - mini;
        profit = max(profit, diff);
        mini = min(mini, prices[i]);
    }
    return profit;
}



*/