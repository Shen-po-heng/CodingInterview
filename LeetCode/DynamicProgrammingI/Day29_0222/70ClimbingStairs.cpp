//70. Climbing Stairs
//DP
class Solution {

public:
    int climbStairs(int n) {
        if(n==0)
            return 0;
        else if(n==1)
            return 1;
        
        int arr[n+1];
        arr[1]=1;
        arr[2]=2;
        for(int i=3;i<=n;i++)
            arr[i]=arr[i-1]+arr[i-2];
        return arr[n];
    }
};
//recursion
class Solution {
public:
    int combination(int step, vector<int>& tb){
        if (step == 0 || step == 1) 
            return 1;
        if(tb[step]!=-1) 
            return tb[step];
        
        tb[step]=combination(step-1, tb)+combination(step-2, tb);
        return tb[step];
    }
public:
    int climbStairs(int n) {
        int step=n;
        vector<int>tb(n+1, -1);
        return combination(step, tb);
    }
};