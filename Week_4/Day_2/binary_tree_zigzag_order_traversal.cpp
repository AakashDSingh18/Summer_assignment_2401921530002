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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> answer;
        if(root==NULL) return answer;
        bool l_to_r = true;
        deque<TreeNode*> track;
        track.push_back(root);
        while(!track.empty()){
            vector<int> curr;
            int temp= track.size();
            if(l_to_r){
                while(temp--){
                    if(track.front()->left != NULL)track.push_back(track.front()->left);
                    if(track.front()->right != NULL)track.push_back(track.front()->right);
                    curr.push_back(track.front()->val);
                    track.pop_front();
                }
                l_to_r= false;
            }else{
                while(temp--){
                    if(track.back()->right != NULL)track.push_front(track.back()->right);
                    if(track.back()->left != NULL)track.push_front(track.back()->left);
                    curr.push_back(track.back()->val);
                    track.pop_back();
                }
                l_to_r= true;
            }
            answer.push_back(curr);
        }
        return answer;
    }
};