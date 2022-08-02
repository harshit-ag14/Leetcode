class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                stack.push(s[i]);
            
            else if(stack.empty()|| (s[i]==')' && stack.top()!='(') || (s[i]=='}' && stack.top()!='{') || (s[i]==']' && stack.top()!='['))
            {
                return false;
                break;
            }
            else
                stack.pop();
        }
        if(stack.empty())
            return true;
        else
            return false;
    }
};