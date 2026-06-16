class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='[') st.push(s[i]);
            else{
                if(st.empty())return false;
                char last= st.top();
                if((s[i]==')' && last=='(')||(s[i]=='}' && last=='{')||(s[i]==']' && last=='[')) st.pop();
                else return false;
            }
        }
        return (st.empty());
    }
};