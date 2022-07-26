class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
     int n=candies.size();
     vector<bool> result(n);
        int maxm=*max_element(candies.begin(),candies.end());
        
        for(int i=0;i<n;i++)
        {
            if(candies[i]+extraCandies>=maxm)
                result[i]=true;
            else
                result[i]=false;
        }
        return result;
    }
};