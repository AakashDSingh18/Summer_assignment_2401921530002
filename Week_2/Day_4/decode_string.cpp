class Solution {
public:
    string decodeString(string s) {
        stack<char> track;
        
        for (int i = 0; i < s.size(); i++) {
            if(s[i] == ']'){
                string curr = "";
                while (!track.empty() && track.top() != '[') {
                    curr += track.top();
                    track.pop();
                }
                track.pop();
                string numStr = "";
                while (!track.empty() && isdigit(track.top())) {
                    numStr += track.top();
                    track.pop();
                }
                reverse(numStr.begin(), numStr.end()  );
                int k = stoi(numStr);
                reverse(curr.begin(), curr.end());
                string repeated = "";
                while (k--) {
                    repeated += curr;
                }
                for (char c : repeated) {
                    track.push(c);
                }
            }else{
                track.push(s[i]);
            }
        }
        string answer = "";
        while (!track.empty()) {
            answer += track.top();
            track.pop();
        }
        reverse(answer.begin(), answer.end());
        return answer;
    }
};