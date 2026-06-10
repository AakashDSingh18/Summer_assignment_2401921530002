class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> counting;
        int n= s.size();
        int i=0;
        int j=0;
        int cnt=0;
        int ans=0;
        while(j<n){
            counting[s[j]]++;
            if(counting[s[j]]>1){
                while(i<=j && counting[s[j]]!=1){
                    counting[s[i]]--;
                    i++,cnt--;
                }
            }
            cnt++;
            ans=max(cnt, ans);
            j++;
        }
        return ans;
    }
};