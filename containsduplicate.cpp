class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      //Create a map to restore nums' values
        unordered_map<int, int> container;
        for (int i = 0; i < nums.size(); i++) {
          //If a value from nums is not found in the map, it is added
            if (container.find(nums[i]) == container.end()) {
                container[nums[i]] = nums[i];
            }
            // If a value is found, return true
            else {
                return true;
            }
        }
        return false;
    }
};
