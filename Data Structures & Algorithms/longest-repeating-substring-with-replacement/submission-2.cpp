class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26,0);
        int maxFreq = 0, l = 0, maxLen = 0;
        for (int r = 0; r < s.size(); r++) {
            char c = s[r];
            int len = 0;
            freq[c - 'A']++;
            maxFreq = max(freq[c - 'A'], maxFreq);
            len = r - l + 1;
            if (len - maxFreq > k) {
                freq[s[l] - 'A']--;
                l++;
                len = r - l + 1;
            }
            maxLen = max(maxLen, len);
        }
        return maxLen;
    }
};
