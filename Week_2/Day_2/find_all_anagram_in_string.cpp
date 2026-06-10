class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<char> freq(26, 0);
        vector<char> window_freq(26, 0);
        for(int i=0; i<p.size(); i++){
            freq[p[i]-'a']++;
        }
        int i=0;
        int j=0;
        int n= p.size();
        int m= s.size();
        vector<int> ans;
        while(j<m && i<=j){
            window_freq[s[j]-'a']++;
            if(j-i+1== n){
                if(freq == window_freq){
                    ans.push_back(i);
                }
                window_freq[s[i]-'a']--;
                i++;
                j++;
            }else{
                j++;
            }
        }
        return ans;
    }
};