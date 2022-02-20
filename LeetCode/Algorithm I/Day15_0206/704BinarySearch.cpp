//704. Binary Search

//
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int pivot;
        int left = 0, right = nums.size() - 1;
        
    while (left <= right) {
      pivot = left + (right - left) / 2;
      if (nums[pivot] == target) return pivot;
      if (target < nums[pivot]) right = pivot - 1;
      else left = pivot + 1;
    }
    return left;
    }
};

//wrong
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int pivot;
        int left = 0, right = nums.size() - 1;
        
        while( left<= right){
            pivot = left + (right - left) / 2;
            if (nums[pivot] == target) 
                return pivot;
            if (target < nums[pivot]){
                if(target > nums[pivot-1])
                    return pivot-1;
                else
                    right = pivot - 1;
            }     
            else {
                if(target < nums[pivot+1])
                    return pivot+1;
                else    
                    left = pivot + 1;
            }
        }
        return 0;
    }
};