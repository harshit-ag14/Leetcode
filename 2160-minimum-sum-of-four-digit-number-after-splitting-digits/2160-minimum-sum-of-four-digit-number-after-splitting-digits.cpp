class Solution {
public:
    int minimumSum(int num) {
        vector<int> A(4);
        for(int i=0;i<4;i++)
        {
            int temp=num%10;
            A[i]=temp;
            num/=10;
        }
        sort(A.begin(),A.end());
        int sum;
        sum=(A[0]*10+A[3])+(A[1]*10+A[2]);
        return sum;
        
    }
};