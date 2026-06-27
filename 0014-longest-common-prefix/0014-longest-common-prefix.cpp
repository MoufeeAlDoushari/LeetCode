class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty())
         return "";

    string prefix = strs[0];  // Take first string as prefix

    for (int i = 1; i < strs.size(); i++) {
        // Reduce prefix until it matches with current string
        while (strs[i].find(prefix) != 0) {
            prefix.pop_back();  // Remove last character (match korle bhitore ashtese and jottuk match kortese oitukbadde bakituk pop kortese)
            if (prefix.empty()) //shob pop korle toh string empty so return empty
             return "";
        }
    }
    return prefix;
    }
};