class Solution {
    int depth(TreeNode* root){
        if (!root){
            return 0;
        }
        return 1 + max(depth(root->left),depth(root->right));
    }
public:
    int maxDepth(TreeNode* root) {
        return depth(root);
    }
};
