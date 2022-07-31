class Solution {
public:
    bool isPalindrome(string s) {
        string ans;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        for(int i=0;i<s.size();i++)
        {
            if((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9'))
                ans.push_back(s[i]);
        }
                cout<<ans;

        string check=ans;
        int start=0;
        int end=ans.size()-1;
        while(start<end)
        {
            swap(ans[start++],ans[end--]);
        }
        if(ans==check)
            return true;
        return false;
        
    }
};