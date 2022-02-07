//977. Squares of a Sorted Array
/*This one: time complexity: O(nlogn)*/
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        //for square
        for(int i=0;i<nums.size();i++){
            nums[i]*=nums[i];
        }
        //sort
        sort(nums.begin(), nums.end());      
        return nums;
    }
};
//How about O(n)