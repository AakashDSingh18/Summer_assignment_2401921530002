class Solution {
public:
    int compress(vector<char>& chars) {
        int n= chars.size();
        int i=0;
        int j=0;
        while(j< n){
            int cnt=1;
            while(j<n-1 && chars[j] == chars[j+1]){
                cnt++, j++;
            }
            chars[i] = chars[j];
            i++;
            if(cnt>1){
                vector<char> digit;
                while(cnt > 0){
                    int temp= cnt%10;
                    cnt/=10;
                    digit.push_back(char(temp + '0'));
                }
                for(int k=digit.size()-1; k>=0; k--){
                    chars[i]= digit[k];
                    i++;
                }
            }
            j++;
        }
        return (i==0)? 1: i;
    }
};