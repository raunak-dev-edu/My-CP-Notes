// https://leetcode.com/problems/minimum-cost-tree-from-leaf-values/
/*
-> Min cost tree from leaf values - Given an array arr of positive integers, consider all binary trees such that: Each node has either 0 or 2 children; The values of arr correspond to the values of each leaf in an in-order traversal of the tree.The value of each non-leaf node is equal to the product of the largest leaf value in its left and right subtree, respectively.
Among all possible binary trees considered, return the smallest possible sum of the values of each non-leaf node. It is guaranteed this sum fits into a 32-bit integer.

// using recurssion
int solve(vector<int>& arr,map<pair<int, int>, int>&maxi , int left, int right){
    //leaf node
    if(left == right){
        return 0;
    }
    int ans= INT_MAX;
    for(int i =left; i<right; i++){
        ans = min(ans, maxi[{left,i}]* maxi[{i+1,right}] + solve(arr, maxi, left, i) + solve(arr, maxi, i+1, right));
    }
    return ans;
}

// using recurssion+memorization
int solveMemo(vector<int>& arr,map<pair<int, int>, int>&maxi , int left, int right, vector<vector<int>> &dp){
    //leaf node
    if(left == right){
        return 0;
    }
    if(dp[left][right]  != -1){
        return dp[left][right];
    }
    int ans= INT_MAX;
    for(int i =left; i<right; i++){
        ans = min(ans, maxi[{left,i}]* maxi[{i+1,right}] + solveMemo(arr, maxi, left, i,dp) + solveMemo(arr, maxi, i+1, right,dp));
    }
    return dp[left][right] = ans;
}

// using tabulation
TODO

int mctFromLeafValues(vector<int>& arr) {
    map<pair<int, int>, int>maxi;

    for(int i =0; i<arr.size();i++){
        maxi[{i,i}] = arr[i];
        for(int j =i+1; j< arr.size(); j++){
            maxi[{i,j}] = max(arr[j], maxi[{i,j-1}]);
        }
    }
    // return solve(arr, maxi, 0, arr.size()-1);
    int n = arr.size();
    vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
    return solveMemo(arr, maxi, 0, arr.size()-1,dp);
}


*/