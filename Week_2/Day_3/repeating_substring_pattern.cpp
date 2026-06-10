class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n= s.size();
        string neww= s+s;
        int i= 1;
        int j= n;
        while(i<n){
            if(neww.substr(i, n)== s) return true;
            i++;
        }
        return false;
    }
};