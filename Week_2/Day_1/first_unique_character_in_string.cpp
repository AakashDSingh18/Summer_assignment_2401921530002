class Solution {
public:
    int firstUniqChar(string s) {
        int n= s.size();
        unordered_map<char, int> hashmpp;
        for(char x: s) hashmpp[x]+=1;
        for(int i= 0; i<n; i++){
            if(hashmpp[s[i]]==1) return i;
        }
        return -1;   
    }
};