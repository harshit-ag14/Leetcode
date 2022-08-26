class Solution {
public:
    int reverse(int x) {
        int rev=0,n=x;
        while(n!=0)
        {
            if(rev<INT_MIN/10 || rev>INT_MAX/10)
                return 0;
            else
                rev=rev*10+n%10;
                n=n/10;
        }
        return rev;
        
    }
};