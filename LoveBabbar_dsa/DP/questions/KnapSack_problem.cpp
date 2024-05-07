// https://www.codingninjas.com/codestudio/problems/0-1-knapsack_920542?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0
/*
->KnapSack Problem - theif is robbing a store and can carry a maximal weight of W into his knapsack.There are N items and the ith item weighs wi and is of value vi.
considering the constraints of the maximum weight that a knapsack can carry, you have to find and return the maximum value that a theif can generate by stealing items.

#include <bits/stdc++.h> 
// using recurssion
int solve(vector<int> &weight, vector<int> &value, int index, int capacity){
    //base case
    // if only item to steal, then just compare its weight with the knapsaxk cpacity
    if(index == 0){
        if(weight[0]<=capacity){
            return value[0];
        }
        else{
            return 0;
        }
    }
    int include =0;
    if(weight[index] <= capacity){
        include = value[index] + solve(weight, value, index-1,capacity - weight[index]);
    }
    int exclude = 0 + solve(weight, value, index-1,capacity);

    int ans = max(exclude, include);
    return ans;
}

// using rec + memorization
int solveMem(vector<int> &weight, vector<int> &value, int index, int capacity, vector<vector<int>> &dp){
    //base case
    // if only item to steal, then just compare its weight with the knapsaxk cpacity
    if(index == 0){
        if(weight[0]<=capacity){
            return value[0];
        }
        else{
            return 0;
        }
    }
    if(dp[index][capacity] != -1){
        return dp[index][capacity];
    }
    int include =0;
    if(weight[index] <= capacity){
        include = value[index] + solveMem(weight, value, index-1,capacity - weight[index],dp);
    }
    int exclude = 0 + solveMem(weight, value, index-1,capacity,dp);

    dp[index][capacity] = max(exclude, include);
    return dp[index][capacity];
}

// using tabulation
int solveTab(vector<int> &weight, vector<int> &value, int n, int capacity){

    //step1
    vector<vector<int>> dp(n, vector<int>(capacity+1, 0));

    //step2 - analyse base case
    for(int w = weight[0]; w<= capacity; w++){
        if(weight[0] <= capacity){
            dp[0][w] = value[0];
        }
        else{
            dp[0][w] = 0;
        }
    }

    //step3 - take care of remamining recurssive calls
    for(int index =1; index<n; index++){
        for(int w =0; w<=capacity; w++){
            int include =0;
            if(weight[index] <= w){
                include = value[index] + dp[index-1][w-weight[index]];
            }
            int exclude = 0 + dp[index-1][w];

            dp[index][w] = max(exclude, include);
        }
    }
    return dp[n-1][capacity];
}

// using space optimization
int solveOpt(vector<int> &weight, vector<int> &value, int n, int capacity){
    //step1
    vector<int> prev(capacity+1, 0);
    vector<int> curr(capacity+1, 0);

    //step2 - analyse base case
    for(int w = weight[0]; w<= capacity; w++){
        if(weight[0] <= capacity){
            prev[w] = value[0];
        }
        else{
            prev[w] = 0;
        }
    }

    //step3 - take care of remamingin recurssive calls
    for(int index =1; index<n; index++){
        for(int w =0; w<=capacity; w++){
            int include =0;
            if(weight[index] <= w){
                include = value[index] + prev[w-weight[index]];
            }
            int exclude = 0 + prev[w];

            curr[w] = max(exclude, include);
        }
        prev = curr;
    }
    return prev[capacity];
}

int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	// return solve(weight, value, n-1, maxWeight);

    // vector<vector<int>> dp(n, vector<int>(maxWeight+1,-1));
    // return solveMem(weight, value, n-1, maxWeight, dp);

    // return solveTab(weight, value, n, maxWeight);
    
    return solveOpt(weight, value, n, maxWeight);
}

TODO - learn again

*/