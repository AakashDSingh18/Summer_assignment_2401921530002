
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(root == NULL) return "";
        queue<TreeNode*> track;
        string answer="";
        track.push(root);
        while(!track.empty()){
            int temp= track.size();
            while(temp--){
                if(track.front()==NULL){
                    answer+= "#,";
                    track.pop();
                    continue;
                }else answer+= to_string(track.front()->val)+",";

                track.push(track.front()->left);
                track.push(track.front()->right);
                track.pop();
            }
        }
        return answer;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data=="") return NULL;
        int n= data.size();
        queue<TreeNode*> track;
        int j= 0;
        string current="";
        while(data[j] != ','){
            current+= data[j];
            j++;
        }
        j++;
        TreeNode* root= new TreeNode(stoi(current));
        track.push(root);
        while(!track.empty() && j<n){
            int temp= track.size();
            while(temp--){
                TreeNode* parent= track.front();
                track.pop();
                
                if(data[j]=='#')j++;
                else{
                    string leftStr="";
                    while(data[j] != ','){
                        leftStr+= data[j];
                        j++;
                    }
                    parent->left= new TreeNode(stoi(leftStr));
                    track.push(parent->left);
                }
                j++;
                
                if(j<n){
                    if(data[j]=='#')j++;
                    else{
                        string rightStr="";
                        while(data[j] != ','){
                            rightStr+= data[j];
                            j++;
                        }
                        parent->right= new TreeNode(stoi(rightStr));
                        track.push(parent->right);
                    }
                    j++;
                }
            }
        }
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));