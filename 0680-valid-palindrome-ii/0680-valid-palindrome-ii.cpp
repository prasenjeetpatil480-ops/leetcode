class Solution {
public:
    bool validPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {
            if (s[left] != s[right]) {
                return isPali(s, left, right - 1) || isPali(s, left + 1, right);
            }
            left++;
            right--;
        }
        return true;
    }

private:
    bool isPali(const string& s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
