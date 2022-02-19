//136. Single Number
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> map; 
        for(int i=0; i<nums.size(); i++){
			map[nums[i]] += 1; 
        }
        
        int ans;
        for(auto x:map){
            if(x.second == 1){
                ans = x.first; 
                break;
            }
        }
        return ans;
    }
};