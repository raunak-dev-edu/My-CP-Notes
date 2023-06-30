// https://practice.geeksforgeeks.org/problems/get-minimum-squares0538/1
/*
-> Perfect square problem - find minimum number of sqaures of any number that sums to N. For example: if N = 100, N can be expressed as 10*10 and also as (5*5 + 5*5 + 5*5 + 5*5) but the output will be 1 as minimum number of sqaure is 1, i.e., (10*10).

// using recu
int solve(int n){
    //base caase
    if(n ==0){
        return 0;
    }
    int ans =n;
    for(int i =1; i*i <= n; i++){
        int temp = i*i;
        ans = min(ans, 1+ solve(n-temp));
    }
    return ans;
}

//using memorization
int solveMem(int n, vector<int> &dp){
    //base caase
    if(n ==0){
        return 0;
    }
    if(dp[n] !=-1){
        return dp[n];
    }
    int ans =n;
    for(int i =1; i*i <= n; i++){
        int temp = i*i;
        ans = min(ans, 1+ solveMem(n-temp,dp));
    }
    dp[n] = ans;
    return dp[n];
}

// using tabulation
int solveTab(int n){
    vector<int> dp(n+1, INT_MAX);
    dp[0] =0;

    for(int i =1; i<=n; i++){
        for(int j =1; j*j <= n; j++){
            int temp = j*j;

            if(i-temp>=0){
                dp[i] =min(dp[i], 1+ dp[i-temp]);
            }
        }
    }
    return dp[n];
}

int MinSquares(int n){
    // return solve(n);

    // vector<int> dp (n+1, -1);
    // return solveMem(n, dp);

    return solveTab(n);

}



*/