// https://practice.geeksforgeeks.org/problems/longest-increasing-subsequence-1587115620/1
/*
-> Longest Increasing Subsequence -  find the length of the longest (strictly) increasing subsequence from the given array.

// using recurssion
int solve(int n, int a[], int curr, int prev){
    //base case
    if(curr==n){
        return 0;
    }
    //include
    int take =0;
    if(prev == -1 || a[curr] > a[prev])
        take = 1+ solve(n, a, curr+1, curr);
    
    // exclude
    int notTake = 0 + solve(n,a, curr+1,prev);

    return max(take, notTake);
}

// using recurssion + memorization
int solveMem(int n, int a[], int curr, int prev,vector<vector<int>> &dp){
    //base case
    if(curr==n){
        return 0;
    }
    if(dp[curr][prev+1] != -1){
        return dp[curr][prev+1];
    }
    //include
    int take =0;
    if(prev == -1 || a[curr] > a[prev])
        take = 1+ solveMem(n, a, curr+1, curr,dp);
    
    // exclude
    int notTake = 0 + solveMem(n,a, curr+1,prev,dp);

    return dp[curr][prev+1] = max(take, notTake);
}

// using tabulation
int solveTab(int n, int a[]){
    vector<vector<int>> dp(n+1, vector<int> (n+1,0));
    for(int curr =n-1; curr >=0; curr--){
        for(int prev = curr-1; prev >= -1; prev--){

            // include
            int take =0;
            if(prev == -1 || a[curr] > a[prev])
                take = 1+ dp[curr +1][curr+1];

            // exclude
            int notTake = 0 + dp[curr+1][prev +1];
            dp[curr][prev+1] = max(take, notTake);
        }
    }
    return dp[0][0];
}

// using space optimization
int solveOpt(int n, int a[]){

    vector<int> currRow(n+1,0);
    vector<int> nextRow(n+1,0);

    for(int curr =n-1; curr >=0; curr--){
        for(int prev = curr-1; prev >= -1; prev--){

            // include
            int take =0;
            if(prev == -1 || a[curr] > a[prev])
                take = 1+ nextRow[curr+1];

            // exclude
            int notTake = 0 + nextRow[prev +1];
            currRow[prev+1] = max(take, notTake);
        }
        nextRow = currRow;
    }
    return nextRow[0];
}

// using dp+binary || TC - O(nlogn)
int solveOptimal(int n , int a[]){
    if(n ==0)
        return 0;
    vector<int>ans;
    ans.push_back(a[0]);
    for(int i =1; i<n;i++){
        if(a[i] > ans.back())
            ans.push_back(a[i]);
    
        else{
            //find index of just bada element in ans
            int index = lower_bound(ans.begin(), ans.end(), a[i]) - ans.begin();
            ans[index] = a[i];
        }
    }
    return ans.size();
}

int longestSubsequence(int n, int a[])
{
    // return solve(n, a, 0, -1);

    // vector<vector<int>> dp(n, vector<int> (n+1,-1));
    // return solveMem(n,a,0,-1,dp);

    // return solveTab(n,a);

    // return solveOpt(n,a);

    return solveOptimal(n,a);
}




*/