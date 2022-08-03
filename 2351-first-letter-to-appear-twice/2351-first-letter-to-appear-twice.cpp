class Solution {
public:
    char repeatedCharacter(string s) {
        map<char,int> m;
        char ch;
        for(int i=0;i<s.length();i++)
        {
            if(m.find(s[i])!=m.end())
            {
                ch=s[i];
                break;
            }
            else
                m[s[i]]=1;
        }
        return ch;
    }
};