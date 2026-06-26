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
    bool isValidBST(TreeNode* root) {
        stack<TreeNode*> track;
        vector<int> inorder;
        TreeNode* temp= root;
        while(temp!= NULL || !track.empty()){
            while(temp != NULL){
                track.push(temp);
                temp= temp->left;
            }
            TreeNode* tempoo= track.top();
            track.pop();
            inorder.push_back(tempoo->val);
            temp= tempoo->right;
        }
        int n= inorder.size();
        for(int i=0; i<n-1; i++){
            if(inorder[i] >= inorder[i+1]) return false;
        }
        return true;
    }
}