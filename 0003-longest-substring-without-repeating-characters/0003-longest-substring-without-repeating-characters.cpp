class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> lastIndex(256, -1); // store last index of each char
        int left = 0;
        int maxLen = 0;

        for (int right = 0; right < s.size(); right++) {
            char c = s[right];

            // If character seen before and is inside current window
            if (lastIndex[c] >= left) {
                left = lastIndex[c] + 1;  // move left pointer
            }

            lastIndex[c] = right;  // update last seen index
            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};