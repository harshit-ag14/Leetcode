class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return nums[0];
        else if(n==2)
            return (min(nums[0],nums[1]));
        else
        {
            vector<int> newNums(n/2);
           int x=1;
           
                 for(int i=0;i<newNums.size();i++)
            {
                if(i%2==0)
                    newNums[i]=min(nums[2*i],nums[2*i+1]);
                else
                    newNums[i]=max(nums[2*i],nums[2*i+1]);
            }
              
            while(x<n/2)
            {
                
                 for(int i=0;i<newNums.size()/2;i++)
            {
                if(i%2==0)
                    newNums[i]=min(newNums[2*i],newNums[2*i+1]);
                else
                    newNums[i]=max(newNums[2*i],newNums[2*i+1]);
            }
              x++;
            }
            return newNums[0];

        }
    }
};