class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int steps=0;
        int water=capacity;
        for(int i=0;i<plants.size();i++)
        {
            if(capacity>=plants[i])
            {
                capacity-=plants[i];
                steps++;
            }
            else if(capacity<plants[i])
            {
                capacity=water;
                capacity-=plants[i];
                steps+=2*i;     //to go and return
                steps++;
            }
        }
        return steps;
    }
};