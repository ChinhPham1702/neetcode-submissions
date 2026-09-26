class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int fast = 0;
        int low = 0;
        do {
            low = nums[low];
            fast = nums[nums[fast]];
        } while(fast != low);
        low = 0;
        while (low != fast) {
            low = nums[low];
            fast = nums[fast];
        }
        return low;
    }
};
