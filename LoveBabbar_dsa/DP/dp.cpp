// Those who forget the past, are condemed to repeat it

/*
2 Approaches-
-Top - down -> recurssion + memorization
-Bottom - up -> tabulation
-space optimization

when to apply dp - 
1] when we can find optimum solution of bigger problem from optimum soltuion of its sub problem
2] having overlapping subproblem

*/
// Approach 1 : top-down
// #include <bits/stdc++.h>
// using namespace std;

// int fib(int n, vector<int> &dp){
//     //base case
//     if(n<=1){
//         return n;
//     }

//     if(dp[n] != -1){
//         return dp[n];
//     }

//     dp[n]= fib(n-1,dp) + fib(n-2,dp);
//     return dp[n];
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<int> dp(n+1);
//     for(int i =0; i<=n;i++){
//         dp[i] = -1;
//     }
//     cout<<fib(n,dp) <<endl;

//     return 0;
// }

// TC - O(n)
// SC - O(n)


// approach -2 : bottom-up
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     vector<int> dp(n+1);
//     dp[1]=1;
//     dp[0] =0;
    
//     for(int i =2; i<=n; i++){
//         dp[i] = dp[i-1] + dp[i-2];
//     }
//     cout << dp[n] <<endl;

//     return 0;
// }

// TC - O(n)
// SC - O(n)


// Space optimization 
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int prev1 =1;
    int prev2 = 0;

    if(n == 0){
        return prev2;
    }
    
    for(int i =2; i<=n; i++){
       int curr = prev1 + prev2;
       // shift logic
       prev2 = prev1;
       prev1 = curr;
    }
    cout << prev1 <<endl;

    return 0;
}