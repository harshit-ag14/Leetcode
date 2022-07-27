class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        vector<int> runningsum(n);
        for(int i=0;i<n;i++)
        {
            sum=0;
            for(int j=0;j<=i;j++)
            {
                sum=sum+nums[j];
                
            }
            runningsum[i]=sum;
        }
        return runningsum;
    }
};