class Solution {
public:
    bool isPalindrome(int x) {
        int n=x;
        int result=0;
        while(n!=0){
            if(n<0){
                return false;
            }
            int r=n%10;
            n=n/10;
            
            if(result>INT_MAX/10) return 0;

            result=result*10+r;

        }

        if(result==x){
            return true;
        }
        return false;
    }
};