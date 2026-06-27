class Solution {
public:
    bool isPalindrome(int x) {
        long long int y=0;
        int xcopy=x;
        if(x<0){
            return false;
        }
        while(x>0){
            y=(y*10)+ (x%10) ;
            x/=10 ;
        }
        return y==xcopy;
    }
};