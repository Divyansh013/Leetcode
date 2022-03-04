class Solution {
public:
    int ways(int n){
        int dp[n+1];
        dp[0]=1;
        dp[1]=1;
        for(int i=2; i<n+1; i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
        }
    int climbStairs(int n) {
        int ans=ways(n);
        return ans;
    }
};