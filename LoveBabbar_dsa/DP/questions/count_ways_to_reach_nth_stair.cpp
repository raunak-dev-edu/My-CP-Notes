// https://www.codingninjas.com/codestudio/problems/count-ways-to-reach-nth-stairs_798650?leftPanelTab=0
/*
-> Count ways to reach Nth Stair

#define MOD 1000000007
int solve(long long nStairs, int i ){
    //base case
    if(i== nStairs){
        return 1;
    }
    if(i>nStairs){
        return 0;
    }

    return (solve(nStairs, i+1)+solve(nStairs, i+2)) % MOD;
}

int countDistinctWayToClimbStair(long long nStairs){
    int ans = solve(nStairs, 0);
    return ans;
}



*/