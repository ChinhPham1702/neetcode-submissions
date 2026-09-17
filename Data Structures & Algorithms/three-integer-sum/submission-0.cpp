class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> re;
        unordered_map<int, int> map;
        for (int j = 0; j < nums.size(); j++) {
            int target1 = 0 - nums[j];
            for (int i = 0; i < nums.size(); i++) {
                int target2 = target1 - nums[i];
                if (i != j) {
                    auto it = map.find(target2);
                    if(it != map.end()) {
                        vector<int> temp = {nums[j], nums[i], nums[it->second]};
                        sort(temp.begin(), temp.end());
                        if(find(re.begin(), re.end(), temp) == re.end()) {
                            re.push_back(temp);
                        }
                    } else {
                        map[nums[i]] = i;
                    }
                }
            }
            map.clear();
        }
        return re;
    }
};
