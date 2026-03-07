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
    bool isSymmetric(TreeNode* root) {
        queue<TreeNode*>qu;
        TreeNode*cur;
        TreeNode*prev;
        qu.push(root->left);
        qu.push(root->right);
        while(!qu.empty())
        {
            cur=qu.front();qu.pop();
            prev=qu.front();qu.pop();
            if(cur==nullptr&&prev==nullptr)
            continue;
            if(cur==nullptr||prev==nullptr||cur->val!=prev->val)
            return false;

            qu.push(cur->left);
            qu.push(prev->right);
            qu.push(cur->right);
            qu.push(prev->left);
            


        }
        return true;
    
    }
};
