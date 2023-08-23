class Solution {
public:
    int solve(int i,int j,vector<vector<int>>& arr,vector<vector<int>>& dp)
    {
        int n=arr.size();
        if(i>=n) return 0;
        int m=arr[i].size();
        if(j>=m){
            return 0;
        }
        if(dp[i][j]!=-1) return dp[i][j];
        
        int d= arr[i][j]+ solve(i+1,j,arr,dp);
        int dg= arr[i][j] + solve(i+1,j+1,arr,dp);
        return dp[i][j]= min(d,dg);
        
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<vector<int>> dp(n);
        for (int i=0; i<n; i++) {
            int m = triangle[i].size();
            for (int j=0; j<m; j++) {
                dp[i].push_back(-1);
            }
        }
        return solve(0, 0, triangle, dp);
    }
};