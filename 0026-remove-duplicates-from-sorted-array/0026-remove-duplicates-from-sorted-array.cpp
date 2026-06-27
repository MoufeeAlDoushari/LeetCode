class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int>seen;
        vector<int>result;
            for (int num : nums) {
                if (seen.find(num) == seen.end()) {
                result.push_back(num);
                seen.insert(num);
                }
            }   
        nums = result;          // modify original vector
        return nums.size();     // return number of unique elements
    }
};