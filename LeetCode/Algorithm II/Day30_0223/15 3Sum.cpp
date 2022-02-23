//15. 3Sum
//sort at first, and one number (i) is stable position 
//and the other two numbers are done by binary search
//the triplet should be [-,-,+] [-,+,+], [0,0,0]
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(begin(nums), end(nums));
        vector<vector<int>> ans;
        for (int i = 0; i < nums.size() && nums[i] <= 0; ++i)
            if (i == 0 || nums[i - 1] != nums[i]) {
                twoSumbybinarysearch(nums, i, ans);
            }
        return ans;
    }
    void twoSumbybinarysearch(vector<int>& nums, int i, vector<vector<int>> &ans) {
        int L = i + 1, R = nums.size() - 1;
        while (L < R) {
            int sum = nums[i] + nums[L] + nums[R];
            if (sum < 0) {
                L++;
            } else if (sum > 0) {
                R--;
            } else {
                ans.push_back({ nums[i], nums[L++], nums[R--] });
                while (L < R && nums[L] == nums[L - 1])
                    L++;
            }
        }
    }
};