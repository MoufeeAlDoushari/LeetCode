class Solution {
public:
  int expand(string &s ,int left,int right)
  {
    while(left>=0&&right<s.size()&&s[left]==s[right])
    {
        left--;
        right++;       
    }
    return right-left-1;
  }
    string longestPalindrome(string s) {
       int left=0,right=0;
       for(int i=0;i<s.size();i++)
       {
        int len1=expand(s,i,i);
        int len2=expand(s,i,i+1);
        int len=max(len1,len2);
        if(len>right-left+1)
        {           
            left=i-(len-1)/2;
            right=i+(len)/2;
        }
       }
       return s.substr(left,right-left+1);
    }
};