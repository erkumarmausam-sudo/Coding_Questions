class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int>ans;
        for (int i = 0; i < nums.size(); i++) {
            int sum = 0;
            while (nums[i] != 0) {
                int rem = nums[i] % 10;
                sum += rem;
                nums[i] /= 10;
            }
            ans.push_back(sum);
        }
        int a = INT_MAX;
        for (int i = 0; i < ans.size(); i++) {
             a = min(a, ans[i]);
        }
        return a;
    }
};