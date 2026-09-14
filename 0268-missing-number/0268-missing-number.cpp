class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int totaln=nums.size()+1;
        int totalsum=0;
        int givensum=0;
        for(int i=0;i<totaln;i++){
            totalsum+=i;
        }
        for(int i=0;i<nums.size();i++){
            givensum+=nums[i];
        }
        return totalsum-givensum;
    }
};