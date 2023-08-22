class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> memo(n, -1);
        return dp(0, nums, memo); 
    }

private:
    int dp(int idx, vector<int>& nums, vector<int>& memo) {
        if (idx >= nums.size()) return 0;
        if (memo[idx] != -1) return memo[idx];
        int rob = nums[idx] + dp(idx + 2, nums, memo); 
        int notRob = dp(idx + 1, nums, memo);
        return memo[idx] = max(rob, notRob);
    }
};