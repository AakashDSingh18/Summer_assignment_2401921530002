class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        queue<int> window;
        deque<int> maximum;
        int n= nums.size();
        int maxi= INT_MIN;
        vector<int> ans;
        for(int i=0; i<n; i++){
            if(i<k-1){
                window.push(nums[i]);
                while(!maximum.empty() && maximum.back()< nums[i]){
                    maximum.pop_back();
                }
                maximum.push_back(nums[i]);
            }else{
                while(!maximum.empty() && maximum.back()< nums[i]){
                    maximum.pop_back();
                }
                maximum.push_back(nums[i]);
                window.push(nums[i]);
                ans.push_back(maximum.front());
                if(window.front()== maximum.front()){
                    maximum.pop_front();
                }
                window.pop();
            }
        }
        
        return ans;
    }
};