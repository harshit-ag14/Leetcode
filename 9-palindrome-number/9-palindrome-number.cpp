class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        int num=x;
        string str=to_string(num);
        int n=str.length();
        
        for(int i=0;i<n/2;i++)
        {
            if(str[i]!=str[n-1-i])
            {
                return false;
                break;
            }
        }
        return true;
    }
};