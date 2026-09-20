class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> arr(128,-1);
        int l = 0, maxLen = 0;
        for (int r = 0; r < s.size(); r++) {
            char c = s[r];
            if (arr[c] >= l) {
                l = arr[c] + 1;
            }
            arr[c] = r;
            maxLen = max(maxLen, r - l + 1);
        }
        return maxLen;
    }
};
