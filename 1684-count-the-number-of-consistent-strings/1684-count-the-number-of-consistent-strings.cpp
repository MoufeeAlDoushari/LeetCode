class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        
        vector<bool> arr(26, false);
        
        for(int i = 0; i < allowed.size(); i++){
            arr[allowed[i] - 'a'] = true;
        }

        int ans = 0;

        for(int i = 0; i < words.size(); i++){
            
            bool ok = true;

            for(int j = 0; j < words[i].size(); j++){
                
                if(arr[words[i][j] - 'a'] == false){
                    ok = false;
                    break;
                }
            }

            if(ok){
                ans++;
            }
        }
        return ans;
    }
};