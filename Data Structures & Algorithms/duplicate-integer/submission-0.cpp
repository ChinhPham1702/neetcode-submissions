class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> ns;
        for (int& num : nums) {
            if (!ns.contains(num)) {
                ns.insert(num);
            }
            else {
                return true;
            }
        }
        return false;
    }
};