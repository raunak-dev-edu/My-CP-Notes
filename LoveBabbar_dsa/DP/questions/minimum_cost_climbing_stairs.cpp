// https://leetcode.com/problems/min-cost-climbing-stairs/
/*
->min Cost climbing stairs

-> using recusion ( this will give TLE)-
int solve(vector<int>&cost, int n){  
    //base case
    if(n == 0){
        return cost[0];
    }
    if(n == 1){
        return cost[1];
    }
    int ans = cost[n] + min(solve(cost, n-1),solve(cost, n-2));
    return ans;
}

->Using dp (recursion + memorization)
int solve2(vector<int> &cost, int n , vector<int>& dp){
    //base
    if(n == 0){
        return cost[0];
    }
    if(n == 1){
        return cost[1];
    }

    //step 3
    if(dp[n] != -1){
        return dp[n];
    }

    //step 2
    dp[n] = cost[n] + min(solve2(cost, n-1,dp) ,solve2(cost, n-2,dp));
    return dp[n];
}

->using dp(tabulation)
int solve3(vector<int>& cost, int n){
    //step1: creation of dp array
    vector<int> dp(n+1);
    //step 2: base case analyse
    dp[0] = cost[0];
    dp[1] = cost[1];

    //3rd step
    for(int i =2; i<n; i++){
        dp[i] = cost[i] + min(dp[i-1], dp[i-2]);
    }
    return min(dp[n-1], dp[n-2]);
}

->using space optimization
int solve4(vector<int> &cost, int n){
    int prev2 = cost[0];
    int prev1 = cost[1];

    for(int i =2; i<n; i++){
        int curr = cost[i] + min(prev1, prev2);
        prev2 = prev1;
        prev1 = curr;
    }
    return min(prev1,prev2);
}

int minCostClimbingStairs(vector<int>&cost){

// using recusion only -
    int n = cost.size();
    int ans = min(solve(cost,n-1), solve(cost, n-2));
    return ans;

// Using dp (recursion + memorization)
    int n = cost.size();
    //step!
    vector<int> dp(n+1,-1);
    int ans = min(solve2(cost,n-1,dp),solve2(cost,n-2,dp));
    return ans;

// using dp(tabulation)
    int n = cost.size();
    return solve3(cost, n);

// using space optimization
    int n = cost.size();
    return solve4(cost, n);

}



*/