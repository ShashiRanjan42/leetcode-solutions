class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<int> v;
        vector<vector<int>> ans;

        map<int,int> mp;
        map<int,int> mp1;
        for(int i=0; i<matches.size(); i++)
        {
            mp[matches[i][0]]++;
            mp1[matches[i][1]]++;
        }

        // winning 

        for(auto i: mp)
        {
            int a = i.first;
            if(mp1.find(a) != mp1.end())
            {
                //nhi mila
                continue;
            }
            else
            {
                v.push_back(a);
            }
        }
        ans.push_back(v);
        v.clear();

        // for lost
        for(auto i:mp1)
        {
            if(i.second == 1)
            {
                v.push_back(i.first);
            }
        }
        ans.push_back(v);

        return ans;
    }
};