class Solution {
public:
    string convertToTitle(int num) {
     string ans;
        while(num!=0)
        {
            char c= 'A'+(num-1)%26;
            ans=c+ans;
            num=(num-1)/26;
        }
        return ans;
    }
};