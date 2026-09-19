class Solution {
public:
    bool isCanEat(vector<int>& piles, int h, int k) {
        for (int& num : piles) {
            h -= (num - 1)/k + 1;
            if (h < 0) return false;
        }
        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int max = 0;
        for (int& num : piles) {
            if (num > max) max = num;
        }
        int l = 1, r = max;
        while (l <= r) {
            int mid = l + (r - l)/2;
            if (isCanEat(piles, h, mid)) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
    return l;
    }
};
