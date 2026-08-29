class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        
        long long original = x;
        long long reverse = 0;
        
        while (x > 0) {
            reverse = reverse * 10 + x % 10;
            x = x / 10;
        }
        
        return original == reverse;
    }
};