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
    bool evaluateTree(TreeNode* root) {
        if(root == NULL)
        {
            return true;
        }
        bool leftN = evaluateTree(root->left);
        bool rightN = evaluateTree(root->right);
        
        if(root->val == 3)
        {
            return (leftN && rightN);
        }
        else if(root->val == 2)
        {
            return (leftN || rightN);
        }
        return root->val;
    }
};