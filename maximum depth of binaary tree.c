/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root) 
{
    if(root==NULL) return 0;
    int l = maxDepth(root->left);
    int h = maxDepth(root->right);
    return 1 + fmax(l,h);
}
