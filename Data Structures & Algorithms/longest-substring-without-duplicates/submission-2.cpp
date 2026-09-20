class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> arr(128,-1);
        int l = 0, max = 0;
        for (int r = 0; r < s.size(); r++) {
            char c = s[r];
            if (arr[c] >= l) {
                max = std::max(max, r - l);
                l = arr[c] + 1;
            }
            arr[c] = r;
            max = std::max(max, r - l + 1);
        }
        return max;
    }
};
