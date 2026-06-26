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
    int maxi(TreeNode* root, int& ans){
        if(root==NULL) return 0;
        int lmax= maxi(root->left, ans);
        if(lmax<0) lmax=0;
        int rmax= maxi(root->right, ans);
        if(rmax<0) rmax=0;
        ans= max(ans, lmax+rmax+root->val);
        return max(lmax, rmax) + root->val;
    }
    int maxPathSum(TreeNode* root) {
        int ans=INT_MIN;
        int temp= maxi(root, ans);
        return ans;
    }
};