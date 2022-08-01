class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxwealth=0;
        int n=accounts.size();
        for(int i=0;i<n;i++)
        {
            int wealth=0;
            for(int j=0;j<accounts[i].size();j++)
            {
                wealth+=accounts[i][j];
            }
            if(wealth>maxwealth)
                maxwealth=wealth;
        }
        return maxwealth;
    }
};