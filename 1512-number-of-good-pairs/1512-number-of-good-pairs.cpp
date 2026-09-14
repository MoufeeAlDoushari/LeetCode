class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ans=0;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            if(mp[nums[i]]>1){
                ans+=mp[nums[i]]-1;
            }
        }
        return ans;
    }
};