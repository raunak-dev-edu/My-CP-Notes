// https://leetcode.com/problems/minimum-score-triangulation-of-polygon/
/*
-> Minimum score triangulation of polygon - You have a convex n-sided polygon where each vertex has an integer value. You are given an integer array values where values[i] is the value of the ith vertex (i.e., clockwise order).
You will triangulate the polygon into n - 2 triangles. For each triangle, the value of that triangle is the product of the values of its vertices, and the total score of the triangulation is the sum of these values over all n - 2 triangles in the triangulation.
Return the smallest possible total score that you can achieve with some triangulation of the polygon.

//using recurssion
int solve(vector<int>& v, int i , int j){
    //base case
    if(i+1 ==j){
        return 0;
    }
    int ans = INT_MAX;
    for(int k = i+1; k<j; k++){
        ans = min(ans, v[i]*v[j]*v[k] + solve(v,i,k) + solve(v,k,j));
    }
    return ans;
}

//using recurssion + memorization
int solveMem(vector<int>& v, int i , int j,vector<vector<int>> &dp){
    //base case
    if(i+1 ==j){
        return 0;
    }
    if(dp[i][j] != -1){
        return dp[i][j];
    }
    int ans = INT_MAX;
    for(int k = i+1; k<j; k++){
        ans = min(ans, v[i]*v[j]*v[k] + solveMem(v,i,k,dp) + solveMem(v,k,j,dp));
    }
    dp[i][j] =ans;
    return dp[i][j];
}

// using tabulation
int solveTab(vector<int> &v){
    int n = v.size();
    vector<vector<int>> dp(n, vector<int> (n,0));

    for(int i = n-1; i>=0; i--){
        for(int j = i+2; j<n; j++){

            int ans = INT_MAX;
            for(int k=i+1; k<j; k++){
                ans = min(ans, v[i]*v[j]*v[k] + dp[i][k] + dp[k][j]);
            }
            dp[i][j] = ans;
        }
    }
    return dp[0][n-1];
}

int minScoreTriangulation(vector<int>& values) {
    int n = values.size();
    // return solve(values, 0, n-1);

    // vector<vector<int>> dp(n, vector<int> (n, -1));
    // return solveMem(values, 0, n-1, dp);

    return solveTab(values);
}

TODO - gap strategy and MCM pattern

*/