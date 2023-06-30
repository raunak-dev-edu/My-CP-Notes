// https://leetcode.com/problems/wildcard-matching/
/*
-> Wildcard pattern matching - Given an input string (s) and a pattern (p), implement wildcard pattern matching with support for '?' and '*' where:
'?' Matches any single character.
'*' Matches any sequence of characters (including the empty sequence).
The matching should cover the entire input string (not partial).

// using recurssion
int solve(string &str, string &pattern , int i, int j){
    //base case
    if(i<0 && j<0){
        return true;
    }
    if(i>=0 && j<0){
        return false;
    }
    if(i<0 && j>=0){
        for(int k =0; k<=j ; k++){
            if(pattern[k] != '*'){
                return false;
            }
        }
        return true;
    }

    //match
    if(str[i] == pattern[j] || pattern[j] =='?'){
        return solve(str, pattern,i-1,j-1);
    }
    else if(pattern[j] == '*'){
        return ( solve(str, pattern, i-1, j) || solve(str, pattern, i, j-1));
    }
    else{
        return false;
    }
}

// using recurssion + memorization
int solveMem(string &str, string &pattern , int i, int j, vector<vector<int>> &dp){
    //base case
    if(i==0 && j==0){
        return true;
    }
    if(i>0 && j==0){
        return false;
    }
    if(i==0 && j>0){
        for(int k =1; k<=j ; k++){
            if(pattern[k-1] != '*'){
                return false;
            }
        }
        return true;
    }
    if(dp[i][j] != -1){
        return dp[i][j];
    }

    //match
    if(str[i-1] == pattern[j-1] || pattern[j-1] =='?'){
        return dp[i][j] = solveMem(str, pattern,i-1,j-1,dp);
    }
    else if(pattern[j-1] == '*'){
        return dp[i][j] = ( solveMem(str, pattern, i-1, j,dp) || solveMem(str, pattern, i, j-1,dp));
    }
    else{
        return false;
    }
}

// using tabulation
bool solveTab(string str, string pattern){

    vector<vector<int>> dp(str.length()+1, vector<int> (pattern.length()+1, 0));
    dp[0][0] = true;

    for(int j=1; j<= pattern.length(); j++){
        bool flag = true;
        for(int k =1; k<=j; k++){
            if(pattern[k-1]!= '*'){
                flag = false;
                break;
            }
        }
        dp[0][j] = flag;
    }

    for(int i=1; i<= str.length(); i++){
        for(int j =1; j<=pattern.length(); j++){
            if(str[i-1] == pattern[j-1] || pattern[j-1] == '?')
                dp[i][j] = dp[i-1][j-1];
            else if(pattern[j-1] == '*')
                dp[i][j] = ( dp[i-1][j] || dp[i][j-1]);
            else
                dp[i][j] = false;
        }
    }
    return dp[str.length()][pattern.length()];
}

// using space optimization
bool solveOpt(string str, string pattern){

    vector<int> prev(pattern.length()+1, 0);
    vector<int> curr(pattern.length()+1, 0);

    prev[0] = true;

    for(int j=1; j<= pattern.length(); j++){
        bool flag = true;
        for(int k =1; k<=j; k++){
            if(pattern[k-1]!= '*'){
                flag = false;
                break;
            }
        }
        prev[j] = flag;
    }

    for(int i=1; i<= str.length(); i++){
        for(int j =1; j<=pattern.length(); j++){
            if(str[i-1] == pattern[j-1] || pattern[j-1] == '?')
                curr[j] = prev[j-1];
            else if(pattern[j-1] == '*')
                curr[j] = ( prev[j] || curr[j-1]);
            else
                curr[j] = false;
        }
        prev = curr;
    }
    return prev[pattern.length()];
}

bool isMatch(string s, string p){
    // return solve(s,p, s.length()-1, p.length()-1);

    // vector<vector<int>> dp(s.length()+1, vector<int> (p.length()+1,-1));
    // return solveMem(s, p, s.length(), p.length(), dp);

    // return solveTab(s,p);

    return solveOpt(s,p);
}

*/