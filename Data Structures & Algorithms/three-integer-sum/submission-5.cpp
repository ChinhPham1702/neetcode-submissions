class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int target = -nums[i];
            int l = i + 1, r = nums.size() - 1;
            while (l < r) {
                int sum = nums[l] + nums[r];
                if (sum == target) {
                    result.push_back({nums[i], nums[r], nums[l]});
                    while (l < r && nums[r] == nums[r - 1]) {
                        r--;
                    }
                    r--;
                    while (l < r && nums[l] == nums[l + 1]) {
                        l++;
                    }
                    l++;
                } else if (sum > target) {
                    r--;
                } else {
                    l++;
                }
            }
        }
        return result;
    }
};