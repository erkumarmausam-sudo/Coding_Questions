class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        while(k--) {
            int mn = nums[0];

            for (int i=0; i<nums.size(); i++) {
                if(nums[i] < mn) {
                    mn = nums[i];
                }
            }

            for(int i=0; i<nums.size(); i++) {
                if(nums[i] == mn) {
                    nums[i] *= multiplier;
                    break;
                }
            }
        }
        return nums;
    }
};