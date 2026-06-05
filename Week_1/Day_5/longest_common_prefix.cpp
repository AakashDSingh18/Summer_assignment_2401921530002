cclass Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        string ans="";
        int mini= strs[0].size();
        for(int i=0; i<n; i++){
            int curr= strs[i].size();
            mini= min(mini, curr);
        }
        for(int j=0; j<mini; j++){
            for(int i=0; i<n; i++){
                if(strs[0][j] != strs[i][j]) return ans;
            }
            ans+=strs[0][j];
        }
        return ans;
    }
};