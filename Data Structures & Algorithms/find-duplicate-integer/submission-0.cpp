class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        int result = 0;
        for (int& num : nums) {
            if (s.count(num) == 0) {
                s.insert(num);
            } else {
                result = num;
                break;
            }
        }
        return result;
    }
};
