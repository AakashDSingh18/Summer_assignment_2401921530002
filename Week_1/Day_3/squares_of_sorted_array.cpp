class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        int n= nums.size();
        int posi=0;
        while(posi<n && nums[posi]<0) posi++;
        int neg= posi-1;
        while(neg>=0 && posi<n){
            int nSq= nums[neg]*nums[neg];
            int pSq= nums[posi]*nums[posi];
            if(nSq < pSq){
                ans.push_back(nSq);
                neg--;
            }else{
                ans.push_back(pSq);
                posi++;
            }
        }
        while(neg>=0){
            int nSq= nums[neg]*nums[neg];
            ans.push_back(nSq);
            neg--;
        }
        while(posi<n){
            int pSq= nums[posi]*nums[posi];
            ans.push_back(pSq);
            posi++;
        }
        return ans;
    }
};