class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26, 0);
        int l = 0, lenMax = 0, freqMax = 0;
        for (int r = 0; r < s.size(); r++) {
            int len = 0;
            freq[s[r] - 'A']++;
            freqMax = max(freq[s[r] - 'A'], freqMax);
            len = r - l + 1;
            if (len - freqMax > k) {
                freq[s[l] - 'A']--;
                l++;
                len = r - l + 1;
            }
            lenMax = max(lenMax, len);
        }
        return lenMax;
    }
};
