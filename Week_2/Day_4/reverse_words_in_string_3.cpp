class Solution {
public:
    string reverseWords(string s) {
        int n= s.size();
        int i=0;
        int j=0;
        while(j<n){
            if(j==n-1){
                reverse(s.begin()+i, s.begin()+j+1);
            }else if((s[j]==' ' && i!=j)){
                reverse(s.begin()+i, s.begin()+j);
                j++;
                i=j;
            }else if(s[j]==' '){
                i++;
            }
            j++;
        }
        return s;
    }
};