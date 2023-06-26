class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int s = nums.size();
        // Pace through the nums list
        for(i = 0; i < s; i++) {
            // Create a new target nt to find the complimentary component to the current index num
            int nt = target - nums[i];
            // Go through the list once again to find the complimentary component's index and return both components' indexes
            for (k = 0; k < s; k++) {
                if (nt == nums[k]) {
                    return {i, k};
                    
                }
            }

        }
            
    }
};
