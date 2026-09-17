class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        unordered_map<int, int> map;
        vector<vector<int>> buckets(nums.size()+ 1);
        for(int i:nums){
            map[i]++;
        }
        for(auto& pair : map){
            buckets[pair.second].push_back(pair.first);
        }
        for(int i = nums.size();i > -1; --i){
            for(int a: buckets[i]){
                result.push_back(a);
                if (result.size() == k){
                    return result;
                }
            }
        }
        return result;
    }
};
