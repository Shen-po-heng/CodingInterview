//167. Two Sum II - Input Array Is Sorted

//binary search
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;
        while (left < right) {
            int sum = numbers[left] + numbers[right];
                          
            if (sum == target) 
                return {left + 1, right + 1};
            else if (sum < target) 
                left++;
            else 
                right--;
            
        }
        return {-1, -1};
    }
};

//brute
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> num;
        for(int i=0;i<nums.size();i++)
            for(int j=i+1;j<nums.size();j++)
                if (nums[i]+nums[j]==target){
                    num.push_back(i);
                    num.push_back(j);
                    break;
                }
        return num;
    }
};

