class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {

        map<string,int> mp;

        for(int i = 0; i < words.size(); i++) {
            mp[words[i]]++;
        }

        vector<pair<string,int>> v;

        for(auto x : mp) {
            v.push_back({x.first, x.second});
        }

        sort(v.begin(), v.end(), [](pair<string,int> a, pair<string,int> b) {

            if(a.second != b.second)
                return a.second > b.second;

            return a.first < b.first;
        });

        vector<string> ans;

        for(int i = 0; i < k; i++) {
            ans.push_back(v[i].first);
        }

        return ans;
    }
};