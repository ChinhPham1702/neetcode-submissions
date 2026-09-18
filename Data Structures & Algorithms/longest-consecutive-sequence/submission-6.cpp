class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> sets;
        int maxLeng = 0;
        for (int& num : nums) {
            sets.insert(num);
        }
        for (auto& num : sets) {
            if (sets.contains(num - 1)) continue;
            int cur = num + 1;
            int leng = 1;
            while (sets.contains(cur)) {
                cur++;
                leng++;
            }
            maxLeng = max(maxLeng, leng);
        }
        return maxLeng;
    }
};