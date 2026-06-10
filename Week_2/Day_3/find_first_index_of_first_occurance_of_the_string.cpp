class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0;
        int j=0;
        int n= needle.size();
        int m= haystack.size();
        while(j<m && i<=j){
            if(j-i+1== n){
                if(haystack.substr(i, n)== needle){
                    return i;
                }
                i++;
                j++;
            }else{
                j++;
            }
        }
        return -1;
    }
};