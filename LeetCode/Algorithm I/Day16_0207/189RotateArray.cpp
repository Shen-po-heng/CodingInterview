//189. Rotate Array
/*It has several ways to solve*/
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int arr[nums.size()];
        for (int i = 0; i < nums.size(); i++) {
            arr[(i + k) % nums.size()] = nums[i];
        }
        
        for (int i = 0; i < nums.size(); i++) {
            nums[i] = arr[i];
        }
    }
};