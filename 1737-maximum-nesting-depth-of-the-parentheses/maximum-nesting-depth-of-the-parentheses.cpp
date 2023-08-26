class Solution {
public:
    int maxDepth(string s) {
     int count=0,maxi=0;
     int n=s.length();
     if(s=="")
        return 0;
    stack<char> st;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='(')
        {
            st.push('(');
            count++;
        }

        else if(s[i]==')')
        {
                st.pop();
                count=st.size();

        }
        maxi= max(maxi,count);
    }   
        return maxi;
    }
};