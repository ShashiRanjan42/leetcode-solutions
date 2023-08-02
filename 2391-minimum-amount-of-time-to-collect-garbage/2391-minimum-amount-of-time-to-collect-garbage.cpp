class Solution {
public:
    int count(vector<string>& garbage, vector<int>& travel, char a)
    {
        stack<int> stM;
        for(int i=0; i<garbage.size(); i++)
        {
            for(int j=0; j<garbage[i].size(); j++)
            {
                if(garbage[i][j] == a)
                {
                    stM.push(1);
                }
            }
            if(i != garbage.size() - 1)
            {
                if(travel[i] == 1)
                {
                    stM.push(-5);
                }
                else
                stM.push(travel[i]);
            }
        }
        int countM = 0;
        while(!stM.empty())
        {
            if(stM.top() == 1)
            {
                while(!stM.empty())
                {
                    if(stM.top() == -5)
                    {
                        countM += 1;
                    }
                    else
                    {
                        countM += stM.top();
                    }
                    stM.pop();
                }
            }
            else
            {
                stM.pop();
            }
        }

        return countM;

    }
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int countG;
        countG = count(garbage,travel,'G');
        int countM;
        countM = count(garbage,travel,'M');
        int countP;
        countP = count(garbage,travel,'P');

        int count = countM + countG + countP;
        return count;
    }
};