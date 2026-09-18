class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> output(n, 1);
        int product_l = 1;
        int product_r = 1;
        for (int i = 1; i < n; i++) {
            product_l *= nums[i - 1];
            output[i] = product_l;
        }
        for (int i = n - 2; i >= 0; i--) {
            product_r *= nums[i + 1];
            output[i] *= product_r;
        }
        return output;
    }
};
