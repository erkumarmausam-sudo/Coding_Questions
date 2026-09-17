class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int ans = 0;

        for (int x : nums) {
            while (x > 0) {
                if (x % 10 == digit)
                    ans++;
                x /= 10;
            }
        }

        return ans;
    }
};