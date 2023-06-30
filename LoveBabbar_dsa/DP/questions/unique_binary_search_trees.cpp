// https://leetcode.com/problems/unique-binary-search-trees/
/*
-> Unique Binary Search Trees - Given an integer n, return the number of structurally unique BST's (binary search trees) which has exactly n nodes of unique values from 1 to n.

no of structure BST is similar to catalan number

// using recurssion
int solve(int n){
    if(n<=1){
        return 1;
    }
    int ans = 0;
    //think ii as root node
    for(int i =1; i<=n ; i++){
        ans += solve(i-1) * solve(n-i);
    }
    return ans;
}
// using recurssion + memorization
int solveMem(int n, vector<int> &dp){
    if(n<=1){
        return 1;
    }
    if(dp[n] != -1)
        return dp[n];
    
    int ans = 0;
    //think ii as root node
    for(int i =1; i<=n ; i++){
        ans += solveMem(i-1,dp) * solveMem(n-i,dp);
    }
    return dp[n] =ans;
}

// using tabulation
int solveTab(int n){
    vector<int> dp(n+1,0);
    dp[0] = dp[1] =1;

    //i-> number of nodes
    for(int i =2; i<=n; i++){
        //j-> root node
        for(int j =1; j<=i; j++){
            dp[i] += dp[j-1]*dp[i-j];
        }
    }
    return dp[n];
}

int numTrees(int n) {
    // return solve(n);

    // vector<int> dp(n+1,-1);
    // return solveMem(n,dp);

    return solveTab(n);
}


*/