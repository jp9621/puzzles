class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      // Create blank map called container
        unordered_map<int, int> container;
      // Create a for loop to go through each unit in the nums list, checking to see if the missing component is found in the map, if not then add the current component into the map
        for (int i = 0; i < nums.size(); i++) {
            if (container.end() == container.find(target - nums[i])) {
                container[nums[i]] = i;
              // When match found, retrive the index of the found component in the map and the current component
            } else {
                return {container[target - nums[i]], i};
            }
        }
        return {};
    }
};
