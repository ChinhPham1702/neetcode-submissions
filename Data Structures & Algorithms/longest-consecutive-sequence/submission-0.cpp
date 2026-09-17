class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int max = 0;
        for (int num : s) {
            if (!s.contains(num - 1)) {
                int curNum = num + 1;
                int curLen = 1;
                while(s.contains(curNum)){
                    curNum++;
                    curLen++;
                }
                max = std::max(curLen, max);
            }
        }
        return max;
    }
};