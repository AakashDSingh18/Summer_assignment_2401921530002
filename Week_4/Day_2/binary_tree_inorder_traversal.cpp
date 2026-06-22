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
    // Morris Inorder Traversal
    vector<int> inorderTraversal(TreeNode* root) {
        if(root==NULL) return {};
        vector<int> inorder;
        TreeNode* temp= root;
        while(temp!=NULL){
            if(temp->left == NULL){
                inorder.push_back(temp->val);
                temp= temp->right;
            }else{
                TreeNode* next= temp->left;
                while(next->right!= NULL && next->right!= temp){
                    next= next->right;
                }
                if(next->right == temp){
                    next->right= NULL;
                    inorder.push_back(temp->val);
                    temp= temp->right;
                }else{
                    next->right= temp;
                    temp= temp->left;
                }
            }
        }
        return inorder;
    }
};