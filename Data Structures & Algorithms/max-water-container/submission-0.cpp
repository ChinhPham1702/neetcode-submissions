class Solution {
public:
    int maxArea(vector<int>& heights) {
        int r = heights.size() - 1, l = 0, max = 0;
        while (l < r) {
            int curr = (r - l) * min(heights[r], heights[l]);
            max = std::max(curr, max);
            if (heights[r] > heights[l]) {
                l++;
            } else {
                r--;
            }
        }
        return max;
    }
};
