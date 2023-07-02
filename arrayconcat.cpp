class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
      // Push back all array elemments into end of array
       for (int i=0; i < nums.size(); i++) {
			 nums.push_back(nums[i]);
		 }
      // return array
		 return nums;
    }
};
