class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n= strs.size();
        int j= 0;
        vector<vector<string>> ans;
        unordered_map<string, int> answer;
        while(j<n){
            string current= strs[j];
            sort(current.begin(), current.end());
            if(answer.find(current)!= answer.end()){
                ans[answer[current]].push_back(strs[j]);
            }else{
                answer[current]= ans.size();
                ans.push_back({strs[j]});
            }
            j++;
        }
        return ans;
    }
};