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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>lmx;
        if(root==nullptr)
        return lmx;
        queue<TreeNode*>qu;
        TreeNode*cur=nullptr;
        qu.push(root);
        int q=0;
        while(!qu.empty())
        {
            q=qu.size();
            vector<int>lmxlevel;
            for(int i=0;i<q;i++)
            {
                
                cur=qu.front();
                qu.pop();
                lmxlevel.push_back(cur->val);
                if(cur->left!=nullptr)
                qu.push(cur->left);
                if(cur->right!=nullptr)
                qu.push(cur->right);
            }
            lmx.push_back(lmxlevel);
           


        }
        return lmx;
    }
};
