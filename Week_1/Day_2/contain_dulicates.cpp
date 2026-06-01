class Solution{
public:
    bool containsDuplicate(vector<int>& nums){
        int n= nums.size();
        unordered_map<int, bool> preCheck;
        for(int i=0; i<n; i++){
            if(preCheck.find(nums[i]) != preCheck.end()) return true;
            else{
                preCheck[nums[i]]=true;
            }
        }
        return false;
    }
};