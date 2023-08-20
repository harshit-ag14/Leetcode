class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> premax(n);
        premax[0]=height[0];
        vector<int> suffmax(n);
        suffmax[n-1]=height[n-1];
        for(int i=1;i<n;i++)
        {
            premax[i]=max(height[i],premax[i-1]);
        }
        for(int i=n-2;i>=0;i--)
        {
            suffmax[i]=max(height[i],suffmax[i+1]);
        }
        int total=0;
        for(int i=0;i<n;i++)
        {
            total+=min(premax[i],suffmax[i])-height[i];
        }
        return total;
    }
};