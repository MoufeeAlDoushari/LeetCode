class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        map<int,int> mp;

        for(int i = 0; i < arr.size(); i++) {
            mp[arr[i]]++;
        }

        set<int> st;
        for(auto x : mp) {

            if(st.count(x.second)) {
                return false;
            }

            st.insert(x.second);
        }
        return true;
    }
};