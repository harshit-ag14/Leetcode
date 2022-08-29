class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
       int prev=0;
       int count=0;
        
        for(string s: bank)
        {
            int curr=0;
        for(int i=0;i<s.length();i++)
            if(s.at(i)=='1')
                curr++;
            
            if(curr>0)
            {
                count=count+prev*curr;
                prev=curr;
            }
        }
        
        return count;    
    }
};