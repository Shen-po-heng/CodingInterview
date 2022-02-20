//283. Move Zeroes
//by two points, this can wrok but look not briefly
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left=0,right=0;
        while(right<nums.size()-1){
            
            while(nums[left]!=0 && left<nums.size()-1){
                left++;
                right=left;right<nums.size()-1;
            } //look for 0
            if(left == nums.size()-1)
                break;
            while(nums[right]==0 && right<nums.size()-1){
                    right++; 
                if(right<=left)
                    continue;
            }
                
                                 
            nums[left]=nums[right];
            nums[right]=0;
        }
    }
};

// it's more briefly
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    int lastNonZeroFoundAt = 0;
    // If the current element is not 0, then we need to
    // append it just in front of last non 0 element we found. 
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            nums[lastNonZeroFoundAt++] = nums[i];
        }
    }
 	// After we have finished processing new elements,
 	// all the non-zero elements are already at beginning of array.
 	// We just need to fill remaining array with 0's.
    for (int i = lastNonZeroFoundAt; i < nums.size(); i++) {
        nums[i] = 0;
    }
}
};

// another way it to use another vector to store
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();

        // Count the zeroes
        int numZeroes = 0;
        for (int i = 0; i < n; i++) {
            numZeroes += (nums[i] == 0);
        }

        // Make all the non-zero elements retain their original order.
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                ans.push_back(nums[i]);
            }
        }

        // Move all zeroes to the end
        while (numZeroes--) {
            ans.push_back(0);
        }

        // Combine the result
        for (int i = 0; i < n; i++) {
            nums[i] = ans[i];
        }
    }