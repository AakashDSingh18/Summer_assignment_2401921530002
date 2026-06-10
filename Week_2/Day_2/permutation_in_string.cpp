class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<char> freq(26, 0);
        vector<char> window_freq(26, 0);
        for(int i=0; i<s1.size(); i++){
            freq[s1[i]-'a']++;
        }
        int i=0;
        int j=0;
        int n= s1.size();
        int m= s2.size();
        while(j<m && i<=j){
            window_freq[s2[j]-'a']++;
            if(j-i+1== n){
                if(freq == window_freq) return true;
                window_freq[s2[i]-'a']--;
                i++;
                j++;
            }else{
                j++;
            }
        }
        return false;
    }
};