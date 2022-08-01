class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans;
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' ')
                ans+=s[i];
            else if(s[i]==' ')
            { 
                count++;
                if(count < k)
                    ans+=s[i];
                else
                    break;
            }
        }
        return ans;
    }
};