class Solution{
public:
    double findMaxAverage(vector<int>& nums, int k){
        int n= nums.size();
        if(n==1) return nums[0];
        int i=0;
        int j=0;
        double sum=0;
        double max_avg= INT_MIN;
        while(j<=n){
            sum+=nums[j];
            if(j<k-1){
                j++;
            }else{
                max_avg= max(max_avg, sum/k);
                sum-=nums[i];
                j++,i++;
            }
        }
        return max_avg;
    }
};