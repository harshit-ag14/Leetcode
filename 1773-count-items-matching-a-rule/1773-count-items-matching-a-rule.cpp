class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count=0;
        int n=items.size();
        for(int i=0;i<n;i++)
        {
            if(ruleKey=="type" && items[i][0]==ruleValue)
                count++;
            else if(ruleKey=="color" && items[i][1]==ruleValue)
                count++;
            else if(ruleKey=="name" && items[i][2]==ruleValue)
                count++;
        }
        return count;
    }
};