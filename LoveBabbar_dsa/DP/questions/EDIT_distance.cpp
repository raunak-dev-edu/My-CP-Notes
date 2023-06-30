// https://leetcode.com/problems/edit-distance/
/*
-> EDIT distance - Given two strings word1 and word2, return the minimum number of operations required to convert word1 to word2.
You have the following three operations permitted on a word: Insert a character , Delete a character , Replace a character

// using recurssion
int solve(string &a, string &b, int i, int j){
    //base case
    if(i == a.length()){
        return b.length() - j;
    }
    if(j == b.length()){
        return a.length() - i;
    }
    int ans =0;
    if(a[i] == b[j]){
        return solve(a,b, i+1, j+1);
    }
    else{
        //insert
        int insertAns = 1 + solve(a, b, i, j+1);

        //delte
        int deleteAns = 1+ solve(a,b, i+1, j);

        //replace
        int replaceAns = 1 + solve(a, b, i+1, j+1);

        ans = min(insertAns, min(deleteAns, replaceAns));
    }
    return ans;
}

// using recursion + memorization
int solveMem(string &a, string &b, int i, int j, vector<vector<int>> &dp){
    //base case
    if(i == a.length()){
        return b.length() - j;
    }
    if(j == b.length()){
        return a.length() - i;
    }
    if(dp[i][j] != -1)
        return dp[i][j];
    
    int ans =0;
    if(a[i] == b[j]){
        return solveMem(a,b, i+1, j+1,dp);
    }
    else{
        //insert
        int insertAns = 1 + solveMem(a, b, i, j+1, dp);

        //delte
        int deleteAns = 1+ solveMem(a,b, i+1, j, dp);

        //replace
        int replaceAns = 1 + solveMem(a, b, i+1, j+1, dp);

        ans = min(insertAns, min(deleteAns, replaceAns));
    }
    return dp[i][j] = ans;
}

// using tabulation
int solveTab(string a, string b){
    vector<vector<int>> dp(a.length()+1, vector<int>(b.length()+1,0));

    for(int j=0; j< b.length(); j++){
        dp[a.length()][j] = b.length() -j;
    }

    for(int i=0; i< a.length(); i++){
        dp[i][b.length()] = a.length() -i;
    }

    for(int i = a.length()-1; i>=0; i--){
        for(int j = b.length()-1; j>=0; j--){
           int ans =0;
            if(a[i] == b[j]){
                ans = dp[i+1][j+1];
            }
            else{
                //insert
                int insertAns = 1 + dp[i][j+1];

                //delte
                int deleteAns = 1+ dp[i+1][j];

                //replace
                int replaceAns = 1 + dp[i+1][j+1];

                ans = min(insertAns, min(deleteAns, replaceAns));
            }
            dp[i][j]= ans; 
        }
    }
    return dp[0][0];
}

// using space optimization
int solveOpt(string a, string b){
    vector<int> curr(b.length()+1,0);
    vector<int> next(b.length()+1,0);

    for(int j=0; j< b.length(); j++){
       next[j] = b.length() -j;
    }


    for(int i = a.length()-1; i>=0; i--){
        for(int j = b.length()-1; j>=0; j--){

            //catch here -> base case se mila ye
            curr[b.length()] = a.length() -i;
            int ans =0;
            if(a[i] == b[j]){
                ans = next[j+1];
            }
            else{
                //insert
                int insertAns = 1 + curr[j+1];

                //delte
                int deleteAns = 1+ next[j];

                //replace
                int replaceAns = 1 + next[j+1];

                ans = min(insertAns, min(deleteAns, replaceAns));
            }
            curr[j]= ans; 
        }
        next = curr;
    }
    return next[0];
}

int minDistance(string word1, string word2){
    // return solve(word1, word2,0,0);

    // vector<vector<int>> dp(word1.length(), vector<int>(word2.length(), -1));
    // return solveMem(word1, word2, 0,0, dp);

    // return solveTab(word1, word2);

    if(word1.length() == 0){
        return word2.length();
    }
    if(word2.length() == 0){
        return word1.length();
    }

    return solveOpt(word1, word2);
}

*/