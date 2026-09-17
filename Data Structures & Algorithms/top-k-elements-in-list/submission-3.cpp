class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> maps;
        vector<int> result;
        int n = nums.size();
        vector<vector<int>> bucks(n + 1);
        for (int& num : nums) {
            maps[num]++;
        }
        for (auto& [num, count] : maps) {
            bucks[count].push_back(num);
        }
        for (int i = n; i >= 0; i--) {
            for(int& num : bucks[i]) {
                result.push_back(num);
                if (result.size() == k) {
                    return result;
                }
            }
        }
        return result;
    }
};
