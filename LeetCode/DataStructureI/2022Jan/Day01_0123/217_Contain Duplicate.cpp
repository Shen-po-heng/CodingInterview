//217. Contains Duplicate

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int arr[100000]={ };
        for (auto i = nums.begin(); i != nums.end(); ++i){
            if (arr[*i] >=1)
                return true;
            else
                arr[*i]++;
        };
        return false;
    }
};

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int* arr = &nums[0];
        for (int i=0; i<nums.size();i++ ){
            for (int j=i+1; j< nums.size();j++){
                if (arr[i]==arr[j])
                    return true;
            }
        };
        return false;
    }
};

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        vector<int> arr;
        for (auto i= nums.begin(); i !=nums.end(); ++i){ //why ++i instead of i++ ?
            bool exist=false;
            for (auto j= arr.begin(); j !=arr.end(); ++j){
                if (*j==*i)
                    exist=true;
            }
            if (exist)
                return true;
            else
                arr.push_back(*i);
        }
        return false;
    }
};

Final:
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1])
                 return true;
        }
        return false;
    }
};