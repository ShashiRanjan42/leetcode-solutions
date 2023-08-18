class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int count = 0;
        int n = capacity;
        for(int i=0; i<plants.size(); ++i)
        {
            if(plants[i] <= n)
            {
                count++;
                n -= plants[i];
            }
            else
            {
                n = capacity;
                count += 2*i+1;
                n -= plants[i];
            }
        }
        return count;
    }
};