class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int> arr;
        for (vector<int>& a : matrix) {
            for (int& b : a) {
                arr.push_back(b);
            }
        }
        int l = 0, r = arr.size() - 1;
        while (l <= r) {
            int mid = l + (r - l)/2;
            if (arr[mid] == target) {
                return true;
            }
            if (target > arr[mid]) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        return false;
    }
};
