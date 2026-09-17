class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> maps;
        for (int i = 0; i < nums.size(); i++) {
            if (maps.find(nums[i]) == maps.end()) {
                maps.emplace(target - nums[i], i);
            }
            else {
                return vector<int> {maps[nums[i]], i};
            }
        }
    }
};
