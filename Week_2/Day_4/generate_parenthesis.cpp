class Solution {
public:
    void findall(int n, int stCount, int rem, string curr, vector<string>& ans){
        if(curr.size()==2*n){
            ans.push_back(curr);
            return;
        }
        if(rem>0) findall(n, stCount+1, rem-1, curr+'(', ans);
        if(stCount>0) findall(n, stCount-1, rem, curr+')', ans);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        findall(n, 0, n, "", ans);
        return ans;
    }
};