//53. Maximum Subarray

//Dynamic Programming, Kadane's Algorithm
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int result = nums[0];
        int max_end = nums[0];
        for(int i = 1; i < nums.size(); i++){
            max_end = max(max_end + nums[i], nums[i]);
            result = max(result, max_end);
        }
        return result;
    }
};
//brute--run every result once
class Solution {
    public int maxSubArray(int[] nums) {
        int max;
        for (int i = 0; i < nums.length; i++) {
            int current = 0;
            for (int j = i; j < nums.length; j++) {
                current += nums[j];
                max = Math.max(max, current);
            }
        }
        
        return max;
    }
}