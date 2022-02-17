//70. Climbing Stairs

//time exceed
class Solution {
public:
    int climbStairs(int n) {
         return climb_Stairs(0, n);
    }
    int climb_Stairs(int i, int n) {
        if (i > n) {
            return 0;
        }
        if (i == n) {
            return 1;
        }
        return climb_Stairs(i + 1, n) + climb_Stairs(i + 2, n);
    }
};
//ritika_123_123
class Solution {
public:
    int solve(int index, vector<int>& dp){
        if (index == 0 || index == 1) return 1;
        if(dp[index]!=-1) return dp[index];
        
        dp[index]=solve(index-1, dp)+solve(index-2, dp);
        return dp[index];
    }
public:
    int climbStairs(int n) {
        int index=n;
        vector<int>dp(n+1, -1);
        return solve(index, dp);
    }
};