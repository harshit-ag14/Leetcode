class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int> alt(n+1);
        alt[0]=0;
        
        for(int i=0;i<n;i++)
        {
            int temp=alt[i]+gain[i];
            alt[i+1]=temp;
        }
        int maxi=*max_element(alt.begin(),alt.end());
        return maxi;

    }
};