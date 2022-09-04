class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> ans;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            ans.insert(nums[i]);
        }
        vector<int> maxx;
        for(auto it: ans)
        {
            maxx.push_back(it);
        }
        
        if(maxx.size()>2)
        {
            return maxx[maxx.size()-3];
        }
       return maxx[maxx.size()-1];
    }
};