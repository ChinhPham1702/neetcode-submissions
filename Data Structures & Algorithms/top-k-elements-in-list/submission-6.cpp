class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> maps;
        for (int& num : nums) {
            maps[num]++;
        }
        int n = nums.size();
        vector<vector<int>> bucks(n + 1);
        for (auto& [num, count] : maps) {
            bucks[count].push_back(num);
        }
        vector<int> result;
        for (int i = n; i >= 0 && result.size() < k; i--) {
            for (int& num : bucks[i]) {
                result.push_back(num);
            }
        }
        return result;
    }
};
