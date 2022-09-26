class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result=0;
        for(char c: columnTitle)
        {
            int d=c-'A'+1; //as indexing starts with 1 for A
            result=result*26+d;
        }
        return result;
    }
};