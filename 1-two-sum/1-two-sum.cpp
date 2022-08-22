class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
       map<int,int>m;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            if(m.find(target-nums[i])!=m.end() and m.find(target-nums[i])->second!=i)
            {
                v.push_back(i);
                v.push_back(m.find(target-nums[i])->second);
                return v;
            }
            m[nums[i]]=i;
        }
        
        return v;

    }
};