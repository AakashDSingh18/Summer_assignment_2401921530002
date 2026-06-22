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
        if(root==NULL) return {};
        vector<vector<int>> answer;
        queue<TreeNode*> track;
        track.push(root);
        while(!track.empty()){
            int n= track.size();
            vector<int> curr;
            for(int i=0; i<n; i++){
                if(track.front()->left != NULL) track.push(track.front()->left);
                if(track.front()->right != NULL)track.push(track.front()->right);
                curr.push_back(track.front()->val);
                track.pop();
            }
            answer.push_back(curr);
        }
        return answer;
    }
};