class Solution {
public:
    string convert(string s, int n) {
        vector<string> ans(n);
        if(n==1)
            return s;
        
        bool flag=false;
        int i=0;
        for(auto ch:s)
        {
            ans[i]+=ch;
            if(i==0 || i==n-1)
                flag=!flag;

            if(flag)
                i+=1;
            else
                i-=1;
        }
        string res="";
        for(auto it: ans)
        {
            res+=it;
        }
        return res;
    }
};