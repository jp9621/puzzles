class Solution {
public:
    int search(vector<int>& nums, int target) {
      // Set search values between index integers low and high
       int low = 0;
       int high = nums.size() - 1;

       while (low <= high) {
         // Create variable for the middle of the array
           int middle = low + (high - low) / 2;
        // If the middle value matches target, return the middle index
           if (target == nums[middle]) {
               return middle;
           }
        // If the target is bigger than the middle, make middle + 1 the new low, ensuring that the original middle is excluded
           else if (target > nums[middle]) {
               low = middle + 1;
           }
        // If the target is smaller than the middle, make middle - 1 the new high, using the same logic
           else { // target < nums[middle]
               high = middle - 1;
           }
       }

       return -1;
    }
};
