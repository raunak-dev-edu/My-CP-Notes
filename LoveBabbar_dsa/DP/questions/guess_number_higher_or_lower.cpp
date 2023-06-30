// https://leetcode.com/problems/guess-number-higher-or-lower-ii/
/*
->Guess number higher or lower - We are playing the Guessing Game. The game will work as follows:
I pick a number between 1 and n.You guess a number.If you guess the right number, you win the game.If you guess the wrong number, then I will tell you whether the number I picked is higher or lower, and you will continue guessing.
Every time you guess a wrong number x, you will pay x dollars. If you run out of money, you lose the game.
Given a particular n, return the minimum amount of money you need to guarantee a win regardless of what number I pick.

// using recurssion 
int solve(int start, int end){
    if(start >= end){
        return 0;
    }
    int maxi = INT_MAX;
    for(int i = start; i<=end;i++){
        maxi = min(maxi, i+max(solve(start, i-1),solve(i+1,end)));
    }
    return maxi;
}

// using recurssion +memorization
int solveMem(int start, int end, vector<vector<int>> &dp){
    if(start >= end){
        return 0;
    }
    if(dp[start][end] != -1){
        return dp[start][end];
    }
    int maxi = INT_MAX;
    for(int i = start; i<=end;i++){
        maxi = min(maxi, i+max(solveMem(start, i-1,dp),solveMem(i+1,end,dp)));
    }
    return dp[start][end] = maxi;
}

// using tabulation
int solveTab(int n){
    vector<vector<int>> dp(n+2, vector<int>(n+2,0));

    for(int start =n; start>=1; start--){
        for(int end = start; end <=n; end++){
            if(start ==  end)
                continue;
            else{
                int maxi = INT_MAX;
                for(int i = start; i<=end; i++){
                    maxi = min(maxi,i+max(dp[start][i-1], dp[i+1][end]));
                }
                dp[start][end] = maxi;
            }
        }
    }
    return dp[1][n];
}

int getMoneyAmount(int n) {
    // return solve(1,n);

    // vector<vector<int>> dp(n+1, vector<int>(n+1,-1));
    // return solveMem(1,n,dp);

    return solveTab(n);
}


*/