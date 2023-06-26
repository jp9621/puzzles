class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int s = nums.size();
        for(i = 0; i < s; i++) {
            int nt = target - nums[i];
            for (k = 0; k < s; k++) {
                if (nt == nums[k]) {
                    return {i, k};
                    
                }
            }

        }
            
    }
};
