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
    TreeNode* invertTree(TreeNode* root) {
        // B-F-S 
        queue<TreeNode*> que;
        auto rt = root;
        if (!root) return root;
        que.push(root);
        while (!que.empty()) {
            root = que.front();
            que.pop();

            if (root->left) que.push(root->left);
            if (root->right) que.push(root->right);
                
            auto lc = root->left;
            root->left = root->right;
            root->right = lc;

        }
        return rt;
    }
};
