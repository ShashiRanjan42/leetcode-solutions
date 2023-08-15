class Solution {
public:
    vector<int> solve(vector<int> v)
    {
        vector<int> v1;
        if(v.size() == 0)
        {
            v1.push_back(1);
            return v1;
        }

        for(int i=0; i<=v.size(); i++)
        {
            if(i==0 || i==v.size())
            {
                v1.push_back(v[0]);
            }
            else
            {
                if(i < v.size())
                {
                    int x = v[i-1]+v[i];
                    v1.push_back(x);

                }
            }
        }
        return v1;

    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        
        vector<int> v1;
        if(numRows == 0)
        return ans;

        for(int i=0; i<numRows; i++)
        {
            vector<int> v;
            v = solve(v1);
            ans.push_back(v);
            v1.clear();
            v1 = v;
        }

        return ans;
    }
};