// https://www.codingninjas.com/codestudio/problems/count-derangements_873861?leftPanelTab=0
/*
-> Count derangments - find total number of derangments possible of a set N elements.
Derangment is a permutation of N elemnts such that no elements appears in its original position. For example derangments of {0,1,2,3} is {2,3,1,0}

#include <bits/stdc++.h>
#define MOD 1000000007

//using rec+ memorization
long long int solveMem(int n , vector<long long int> &dp){
    //base case
    if(n ==1){
        return 0;
    }    
    if( n == 2){
        return 1;
    }
    if(dp[n] != -1)
        return dp[n];

    dp[n] = ( ((n-1)%MOD) * ( (solveMem(n-1,dp)%MOD) + (solveMem(n-2,dp)%MOD) )%MOD );
    return dp[n];
}

//using Tabulation
long long int solveTab(int n ){
    
    vector<int> dp(n+1, 0);
    dp[1]=0;
    dp[2]=1;

    for(int i =3; i<=n; i++){
        long long int first  = dp[i-1]%MOD;
        long long int second  = dp[i-2]%MOD;
        long long int sum  = (first+second)%MOD;

        long long int ans  = ((i-1)*sum)%MOD;
        dp[i] = ans;
    }
    return dp[n];
}

//using space optimization
long long int solveOpt(int n ){
    
    long long int prev2 =0;
    long long int prev1 =1;

    for(int i =3; i<=n; i++){
        long long int first  = prev1 %MOD;
        long long int second  = prev2 %MOD;
        long long int sum  = (first+second)%MOD;

        long long int ans  = ((i-1)*sum)%MOD;
        prev2 = prev1;
        prev1 = ans;
    }
    return prev1;
} 

long long int countDerangements(int n) {
// using recursion 
    // //base case
    // if(n ==1){
    //     return 0;
    // }    
    // if( n == 2){
    //     return 1;
    // }
    // int ans = ( ((n-1)%MOD) * ( (countDerangements(n-1)%MOD) + (countDerangements(n-2)%MOD) )%MOD );
    // return ans;

    // vector<long long int> dp(n+1, -1);
    // return solveMem(n,dp);

    // return solveTab(n);
    return solveOpt(n);

}



*/