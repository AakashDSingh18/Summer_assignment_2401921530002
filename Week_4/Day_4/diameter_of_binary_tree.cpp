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
    int findmax(TreeNode* root, int& ans){
        if(root==NULL){
            return 0;
        }
        int lmax= findmax(root->left, ans);
        int rmax= findmax(root->right, ans);
        ans= max(ans, lmax+rmax);
        return max(lmax, rmax)+ 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int ans= 0;
        int temp= findmax(root, ans);
        return ans;
    }
};