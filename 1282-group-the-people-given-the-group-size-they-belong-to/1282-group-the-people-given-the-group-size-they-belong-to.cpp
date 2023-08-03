class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        map<int,int> m;
        for(int i=0; i<groupSizes.size(); i++)
        {
            m[groupSizes[i]]++;
        }
        vector<int> v;
        for(auto i:m)
        {
            v.push_back(i.first);
        }

        vector<int> v1;
        vector<vector<int>> ans;

        for(int i=0; i<v.size(); i++)
        {
            int a = v[i];
            for(int j=0; j<groupSizes.size(); j++)
            {
                if(v1.size() == a)
                {
                    ans.push_back(v1);
                    v1.clear();
                }
                if(a == groupSizes[j])
                {
                    v1.push_back(j);
                }
                // if(a == groupSizes[j] && v1.size() < a)
                // {
                //     v1.push_back(j);
                // }
                // else if(v1.size() == a)
                // {
                //     ans.push_back(v1);
                //     v1.clear();
                //     if(a == groupSizes[j])
                //     v1.push_back(j);
                // }
            }
            if(v1.size() != 0)
            {
                ans.push_back(v1);
                v1.clear();
            }
        }
        // ans.push_back(v1);
        return ans;
    }
};