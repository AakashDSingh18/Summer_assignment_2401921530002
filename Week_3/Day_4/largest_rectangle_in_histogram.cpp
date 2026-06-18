class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int ans= INT_MIN;
        stack<int> track;
        int n= heights.size();
        vector<int> nse(n);
        vector<int> pse(n);
        for(int i=0; i<n; i++){
            while(!track.empty() && heights[track.top()] >= heights[i]){
                track.pop();
            }
            pse[i]= (track.empty())? -1: track.top();
            track.push(i);
        }
        while(!track.empty()) track.pop();
        for(int i=n-1; i>=0; i--){
            while(!track.empty() && heights[track.top()] >= heights[i]){
                track.pop();
            }
            nse[i]= (track.empty())? n: track.top();
            track.push(i);
        }
        for(int i=0; i<n; i++){
            int curr= (nse[i]-pse[i]-1)*heights[i]; 
            ans= max(curr, ans);
        }
        return ans;
    }
};