// https://www.codingninjas.com/codestudio/problems/house-robber_839733?leftPanelTab=0
/*
->House robery problem - return maximum amount of money robbed given that house are in circle and adjacent house can't be robbed as its contact to police. 
Amount of money in each house is given  in array. This is similar to last question that is maximum sum of non adjacent elements. only difference is last and first case are connected here thats making adjacent.


#include <bits/stdc++.h> 
// using space optimization 
long long int solveOpt(vector<int> &nums){ // TC - O(N) , SC - O(1)
    int n = nums.size();
    
    long long int prev2 =0;
    long long int prev1 =nums[0];

    for(int i=1; i<n;i++){
        long long int incl = prev2+nums[i];
        long long int excl = prev1+0;
        long long int ans  = max(incl, excl);
        prev2 =prev1;
        prev1 = ans;
    }
    return prev1;
}
long long int houseRobber(vector<int>& valueInHouse)
{
   int n = valueInHouse.size();

   if(n ==1){
    return valueInHouse[0];
   }

   vector<int> first, second;  // SC - O(n)- this makes overall
   for(int i= 0; i<n ; i++){
    if(i!=n-1){
        first.push_back(valueInHouse[i]);
    }
    if(i!=0){
        second.push_back(valueInHouse[i]);
    }
   }
   return max(solveOpt(first), solveOpt(second));
}


*/