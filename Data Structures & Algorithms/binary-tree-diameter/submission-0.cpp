/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int diameter = 0;
    int highCal(TreeNode* root) {
        if (root == NULL) return 0;
        int highLeft = highCal(root->left);
        int highRight = highCal(root->right);
        diameter = max(diameter, highLeft + highRight);
        return (1 + max(highLeft, highRight));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        highCal(root);
        return diameter;
    }
};