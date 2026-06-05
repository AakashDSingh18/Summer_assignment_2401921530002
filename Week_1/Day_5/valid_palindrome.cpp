class Solution {
public:
    bool isPalindrome(string s) {
        string word="";
        int size1= s.size();
        for(int i=0; i<size1; i++){
            if(isalnum(s[i])){
                word+=tolower(s[i]);
            }
        }
        int size2= word.size();
        for(int i=0; i<size2; i++){
            if(word[i]!=word[size2-i-1]){
                return false;
            }
        }return true;

    }
};