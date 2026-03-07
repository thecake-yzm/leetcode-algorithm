// LeetCode 226 翻转二叉树
// 思路：递归交换左右子树
// 时间复杂度 O(n)，空间复杂度 O(h) (h为树的高度)
class Solution {
public:
    void swap(TreeNode* root) {
        TreeNode* cur = root->left;
        root->left = root->right;
        root->right = cur;
        if (root->right) {
            swap(root->right);
        }
        if (root->left) {
            swap(root->left);
        }
    }
    TreeNode* invertTree(TreeNode* root) {
        if (!root) {
            return root;
        }
        swap(root);
        return root;
    }
};
