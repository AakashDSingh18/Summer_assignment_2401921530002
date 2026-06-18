class Solution {
public:
    int evalRPN(vector<string>& tokens){
        stack<int> track;
        int n= tokens.size();
        
        for(int i = 0; i < n; i++) {
            if(tokens[i]== "+" || tokens[i]== "-" || tokens[i]== "*" || tokens[i]== "/") {
                int num1= track.top(); 
                track.pop();
                int num2= track.top();
                track.pop();
                int result;
                if(tokens[i]== "+") result= num2 + num1;
                else if(tokens[i]== "-") result= num2 - num1;
                else if(tokens[i]== "*") result= num2 * num1;
                else if(tokens[i]== "/") result= num2/num1;
                track.push(result);
            }else track.push(stoi(tokens[i]));
        }
        return track.top();
    }
};