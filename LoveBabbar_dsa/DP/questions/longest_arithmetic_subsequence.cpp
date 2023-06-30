// https://practice.geeksforgeeks.org/problems/longest-arithmetic-progression1019/1
/*
->Longest arithmetic subsequence - Given an array called A[] of sorted integers having no duplicates, find the length of the Longest Arithmetic Progression (LLAP) in it.

// using recursion
int solve(int index, int diff, int A[]){
    //backward check
    if(index < 0)
        return 0;
    
    int ans =0;
    for(int j =index-1; j>=0; j--){
        if(A[index] - A[j] == diff){
            ans = max(ans, 1+ solve(j, diff, A));
        }
    }
    return ans;
}

// using rec+memo
int solveMem(int index, int diff, int A[], unordered_map<int, int> dp[]){
    //backward check
    if(index < 0)
        return 0;
    if(dp[index][diff]){
        return dp[index][diff];
    }
    int ans =0;
    for(int j =index-1; j>=0; j--){
        if(A[index] - A[j] == diff){
            ans = max(ans, 1+ solve(j, diff, A));
        }
    }
    return dp[index][diff] =ans;
}

// using tabulation
int solveTab(int A[], int n){
    if(n<=1)
        return n;
    int ans =0;

    unordered_map<int, int> dp[n+1];

    for(int i =1; i<n; i++){
        for(int j =0; j<i; j++){
            int diff = A[i] - A[j];
            int cnt =1;
            //check if ans already present
            if(dp[j].count(diff))
                cnt = dp[j];
            dp[i][diff] = 1 + cnt;
            ans = max(ans, dp[i][diff]);
        }
    }
    return ans;
}

// using space optimization
TODO

int lengthOfLongestAP(int A[], int n) {
    if(n<=2)
        return n;
    int ans =0;

    // for(int i =0; i<n; i++){
    //     for(int j =i+1; j<n; j++){
    //         ans = max(ans, 2+ solve(i, A[j] - A[i],A));
    //     }
    // }
    // return ans;

    // unordered_map<int,int> dp[n+1];
    // for(int i =0; i<n; i++){
    //     for(int j =i+1; j<n; j++){
    //         ans = max(ans, 2 + solveMem(i, A[j] - A[i],A ,dp));
    //     }
    // }
    // return ans;

    return solveTab(A,n);
}

*/