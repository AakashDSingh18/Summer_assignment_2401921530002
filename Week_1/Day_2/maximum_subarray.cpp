class Solution{
public:
    int maxSubArray(vector<int>& nums){
        int n= nums.size();
        int sum=0;
        int ans=0;
        int indi_max=nums[0];
        for(int i= 0; i<n; i++){
            sum+=nums[i];
            if(sum>=0){
                indi_max= max(indi_max, nums[i]);
                ans=max(ans, sum);
            }else{
                indi_max= max(indi_max, nums[i]);
                sum=0;
            }
        }
        return (ans==0)? indi_max: ans;
    }
};