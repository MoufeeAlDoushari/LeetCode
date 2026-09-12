class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>ans(nums.size());
        ans[0]=nums[0];
        int prefixsum=nums[0];
        for(int i=1;i<nums.size();i++){
            prefixsum=prefixsum+nums[i];
            ans[i]=prefixsum;
        }
        return ans;
    }
};