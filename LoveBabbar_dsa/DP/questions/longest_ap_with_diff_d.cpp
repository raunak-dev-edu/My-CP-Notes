// https://leetcode.com/problems/longest-arithmetic-subsequence-of-given-difference/
/*
-> Longest Arithmetic Subsequence of Given Difference - Given an integer array arr and an integer difference, return the length of the longest subsequence in arr which is an arithmetic sequence such that the difference between adjacent elements in the subsequence equals difference.

int longestSubsequence(vector<int>& arr, int difference) {

    unordered_map<int,int> dp;
    int ans =0;

    for(int i =0; i<arr.size(); i++){
        int temp = arr[i] -difference;
        int tempAns =0;

        //check ans exist for temp already or nnot
        if(dp.count(temp))
            tempAns = dp[temp];
        
        //current answer update
        dp[arr[i]] = 1 + tempAns;

        //ans update
        ans = max(ans, dp[arr[i]]);
    }
    return ans;
}



*/