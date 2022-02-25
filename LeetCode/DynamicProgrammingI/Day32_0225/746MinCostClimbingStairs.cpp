//746. Min Cost Climbing Stairs
//DP

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n + 1);  
        for (int i = 2; i <= n; i++) {
            int jumpOneStep = dp[i - 1] + cost[i - 1];  
            int jumpTwoStep = dp[i - 2] + cost[i - 2]; 
            dp[i] = min(jumpOneStep, jumpTwoStep);
        }
        return dp[n];
    }
};

//[0,1,2,2] dead
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int i=0;
        int sum1 = cost[0];
        int sum2 = cost[1];
        int len=cost.size();
        
        while(i<len){
            if(i+2>=len ||i+1>=len)
                break;
            sum1+=min(cost[i+1],cost[i+2]);
            if(cost[i+1]<cost[i+2])
                i+=1;
            else
                i+=2;
        }
     
        i=1;

        while(i<len){
            if(i+2>=len ||i+1>=len)
                break;
            //cout<<min(cost[i+1],cost[i+2]);
            sum2+=min(cost[i+1],cost[i+2]);
            if(cost[i+1]<cost[i+2])
                i+=1;
            else
                i+=2;
        }
        return min(sum1,sum2);
    }
};