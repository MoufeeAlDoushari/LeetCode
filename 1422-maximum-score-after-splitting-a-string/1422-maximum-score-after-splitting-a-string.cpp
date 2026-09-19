class Solution {
public:
    int maxScore(string s) {
        int numofzero=0,numofone=0;
        int ans=0;
        for(int i=1;i<s.size();i++){
            for(int j=0;j<i;j++){
                if(s[j]=='0'){
                    numofzero++;
                }
            }
            for(int j=i;j<s.size();j++){
                if(s[j]=='1'){
                    numofone++;
                }
            }
            int sum=numofzero+numofone;
            ans=max(ans,sum);
            numofzero=0;
            numofone=0;
        }
        return ans;
    }
};