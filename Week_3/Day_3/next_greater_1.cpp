class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mpp;
        stack<int> track;
        for(int i=0; i<nums2.size(); i++){
            while(!track.empty() && track.top()<nums2[i]){
                mpp[track.top()]=nums2[i];
                track.pop();
            }
            track.push(nums2[i]);
        }
        vector<int> ans;
        for(int x: nums1) ans.push_back((mpp.count(x))? mpp[x]: -1);
        return ans;
    }
};