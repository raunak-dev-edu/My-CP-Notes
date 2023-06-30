// https://www.codingninjas.com/codestudio/problems/number-of-ways_3755252?leftPanelTab=0
/*
->Combination sum IV - how many different ways of selecting the elements from the arrray are there such that sum of chosen elements is eaual to the target number tar

#include <bits/stdc++.h> 
// using recurssion
int solve(vector<int> &num, int tar){
    //base case
    if(tar < 0){
        return 0;
    }
    if(tar == 0){
        return 1;
    }

    int ans = 0;
    for(int i =0; i< num.size(); i++){
        ans += solve(num, tar - num[i]);
    }
    return ans;
}

// using recursion + memorization
int solveMem(vector<int> &num, int tar, vector<int> &dp){
    //base case
    if(tar < 0){
        return 0;
    }
    if(tar == 0){
        return 1;
    }
    if(dp[tar] != -1){
        return dp[tar];
    }

    int ans = 0;
    for(int i =0; i< num.size(); i++){
        ans += solveMem(num, tar - num[i],dp);
    }
    dp[tar]= ans;
    return dp[tar];
}

//using tabulation
int solveTab(vector<int> &num, int tar){
    
    vector<int> dp(tar+1, 0);
    dp[0] =1;

    //traversing from target 1 to tar
    for(int i =1; i<=tar; i++){
        //traversing on num vector
        for(int j =0; j<num.size(); j++){
            if(i-num[j] >=0){
                dp[i] += dp[i-num[j]];
            }
        }
    }
    return dp[tar];
}

int findWays(vector<int> &num, int tar)
{
    // return solve(num, tar);

    // vector<int> dp(tar+1, -1);
    // return solveMem(num, tar, dp);

    return solveTab(num, tar);
}



*/