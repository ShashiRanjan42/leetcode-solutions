class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0; i<nums.size(); i++)
        {
            mp[nums[i]]++;
        }

        int maxi = 0;
        for(auto i:mp)
        {
            if(i.second > maxi)
            {
                maxi = i.second;
            }
        }

        vector<vector<int>> ans(maxi);
        for(auto i:mp)
        {
            if(i.second > 0)
            {
                for(int j=0; j<i.second; j++)
                {
                    ans[j].push_back(i.first);
                }
            }
        }
        return ans;

    }
};