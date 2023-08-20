class Solution {
public:
    bool validPath(int n, vector<vector<int>>& arr, int source, int destination) {
        vector<int> adj[n];
        for(int i=0;i<arr.size();i++)
        {
            adj[arr[i][0]].push_back(arr[i][1]);
            adj[arr[i][1]].push_back(arr[i][0]);
        }
        int vis[n];
        for(int i=0;i<n;i++)
        {
            vis[i]=0;
        }
        vis[source]=1;
        queue<int> q;
        q.push(source);
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            if(node==destination)
                return 1;
            for(auto it: adj[node])
            {
                if(!vis[it])
                {
                    q.push(it);
                    vis[it]=1;
                }
            }
        }
        return false;

    }
};