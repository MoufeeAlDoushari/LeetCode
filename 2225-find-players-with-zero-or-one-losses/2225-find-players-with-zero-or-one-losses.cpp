class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int>mp;
        vector<int>zero;
        vector<int>one;
        for(int i=0;i<matches.size();i++){
            mp[matches[i][0]] += 0;
            mp[matches[i][1]]++;
        }
        for(auto x : mp){
            if(x.second==0){
                zero.push_back(x.first);
            }
            if(x.second==1){
                one.push_back(x.first);
            }
        }
        return {zero, one};
        
    }
};