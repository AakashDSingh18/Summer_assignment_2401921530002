class Solution {
public:
    int maxArea(vector<int>& height) {
        int n= height.size();
        int st=0;
        int end=n-1;
        int ans=0;
        while(st<end){
            int vol= (end-st)*(min(height[st],height[end]));
            ans= max(ans, vol);
            if(height[st]<height[end]) st++;
            else end--;
        }
        return ans;
    }
};