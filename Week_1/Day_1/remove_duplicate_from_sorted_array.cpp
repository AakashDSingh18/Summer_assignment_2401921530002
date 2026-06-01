class Solution{
public:
    int removeDuplicates(vector<int>& nums){
        int n= nums.size();
        int j=0;
        for(int i=0; i<n; i++){
            if(i==0 || (i>0 && nums[i]!=nums[i-1])){
                nums[j]=nums[i];
                j++;
            }
        }
        return j;
    }
};