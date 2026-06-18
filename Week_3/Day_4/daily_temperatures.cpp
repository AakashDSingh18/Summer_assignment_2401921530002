class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> track;
        int n= temperatures.size();
        vector<int> answer(n, 0);
        for(int i=n-1; i>=0; i--){
            while(!track.empty() && temperatures[track.top()] <= temperatures[i]){
                track.pop();
            }
            answer[i]= (track.empty())? 0: track.top()-i;
            track.push(i);
        }
        return answer;
    }
};