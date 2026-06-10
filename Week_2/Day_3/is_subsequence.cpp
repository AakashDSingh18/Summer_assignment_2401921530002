class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n= s.size();
        int m= t.size();
        int ptr_s=0;
        for(int i=0; i<m; i++){
            if(s[ptr_s]==t[i]){
                ptr_s++;
            }
        }
        return (ptr_s==n)? true: false;
    }
};