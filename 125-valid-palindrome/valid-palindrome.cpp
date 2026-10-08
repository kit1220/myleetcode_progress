class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;
        while (!(left >= right)){
            char l = s[left] , r = s[right] ;
            if (l >= 'A' and l <= 'Z') l += 32 ;
            if (r >= 'A' and r <= 'Z') r += 32 ;
            if (!((l >= '0' and l <= '9') or (l>='a' and l<='z'))){
                left++;
                continue;
            }
            if (!((r >= '0' and r <= '9') or (r>='a' and r<='z'))){
                right--;
                continue;
            }
            if (l != r) return false;
            left++;
            right--;
        }
        return true;
    }
};
