class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0, r = 1, max = 0;
        while (r < prices.size()) {
            if (prices[r] < prices[l]) {
                l = r;
            } else {
                max = std::max(max, prices[r] - prices[l]);
            }
            r++;
        }
        return max;
    }
};
