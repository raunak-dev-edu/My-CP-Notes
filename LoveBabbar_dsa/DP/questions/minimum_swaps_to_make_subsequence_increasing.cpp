// https://leetcode.com/problems/minimum-swaps-to-make-sequences-increasing/
/*
-> Minimum swaps to make subsequence increasing - You are given two integer arrays of the same length nums1 and nums2. In one operation, you are allowed to swap nums1[i] with nums2[i].
For example, if nums1 = [1,2,3,8], and nums2 = [5,6,7,4], you can swap the element at i = 3 to obtain nums1 = [1,2,3,4] and nums2 = [5,6,7,8].
Return the minimum number of needed operations to make nums1 and nums2 strictly increasing. The test cases are generated so that the given input always makes it possible.

// using recurssion
int solve(vector<int>& nums1, vector<int>& nums2, int index, bool swapped){

    //base case
    if(index == nums1.size())
        return 0;
    
    int ans = INT_MAX;

    int prev1 = nums1[index-1];
    int prev2 = nums2[index-1];

    //catch
    if(swapped)
        swap(prev1, prev2);

    //noswap
    if(nums1[index] > prev1 && nums2[index] > prev2)
        ans = solve(nums1, nums2,index+1, 0);

    //swap
    if(nums1[index] > prev2 && nums2[index] > prev1)
        ans = min(ans, 1 + solve(nums1, nums2, index+1, 1));

    return ans;
}

// using rec+memorization
int solveMem(vector<int>& nums1, vector<int>& nums2, int index, bool swapped, vector<vector<int> >& dp){

    //base case
    if(index == nums1.size())
        return 0;

    if(dp[index][swapped] != -1)
        return dp[index][swapped];
    
    int ans = INT_MAX;

    int prev1 = nums1[index-1];
    int prev2 = nums2[index-1];

    //catch
    if(swapped)
        swap(prev1, prev2);

    //noswap
    if(nums1[index] > prev1 && nums2[index] > prev2)
        ans = solveMem(nums1, nums2,index+1, 0,dp);

    //swap
    if(nums1[index] > prev2 && nums2[index] > prev1)
        ans = min(ans, 1 + solveMem(nums1, nums2, index+1, 1,dp));

    return dp[index][swapped]= ans;
}

// using tabulation || TC- O(n), SC- O(n);
int solveTab(vector<int>& nums1, vector<int>& nums2){
    int n = nums1.size();
    vector<vector<int>> dp(n+1, vector<int>(2,0));

    for(int index = n-1; index >=1; index--){
        for(int swapped =1; swapped >=0; swapped--){
            int ans = INT_MAX;
            int prev1 = nums1[index-1];
            int prev2 = nums2[index-1];

            //catch
            if(swapped)
                swap(prev1, prev2);

            //noswap
            if(nums1[index] > prev1 && nums2[index] > prev2)
                ans = dp[index+1][0];

            //swap
            if(nums1[index] > prev2 && nums2[index] > prev1)
                ans = min(ans, 1 + dp[index+1][1]);

            dp[index][swapped]= ans;
        }
    }
    return dp[1][0];
}

// using space optimization
int solveOpt(vector<int>& nums1, vector<int>& nums2){
    int n = nums1.size();

    int swap =0;
    int noswap =0;
    int currswap = 0;
    int currnoswap =0;

    for(int index = n-1; index >=1; index--){
        for(int swapped =1; swapped >=0; swapped--){
            int ans = INT_MAX;
            int prev1 = nums1[index-1];
            int prev2 = nums2[index-1];

            //catch
            if(swapped){
                int temp = prev2;
                prev2 = prev1;
                prev1 = temp;
            }

            //noswap
            if(nums1[index] > prev1 && nums2[index] > prev2)
                ans = noswap;

            //swap
            if(nums1[index] > prev2 && nums2[index] > prev1)
                ans = min(ans, 1 + swap);

            if(swapped)
                currswap = ans;
            else
                currnoswap = ans;
        }
        swap = currswap;
        noswap = currnoswap;
    }
    return min(swap, noswap);
}

int minSwap(vector<int>& nums1, vector<int>& nums2) {

    nums1.insert(nums1.begin(), -1);
    nums2.insert(nums2.begin(), -1);

    //it means that the previous index swapped or not
    bool swapped = 0;
    // return solve(nums1, nums2, 1, swapped);

    int n = nums1.size();
    // vector<vector<int> > dp(n, vector<int>(2,-1));
    // return solveMem(nums1, nums2, 1, swapped, dp);

    // return solveTab(nums1, nums2);

    return solveOpt(nums1, nums2);
}


*/