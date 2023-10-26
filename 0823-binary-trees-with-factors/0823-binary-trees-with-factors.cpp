class Solution {
public:
    long long int MOD = 1e9+7;
    int numFactoredBinaryTrees(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        unordered_map<int,long long int> mp;

        for(int i=0; i<arr.size(); i++)
        mp[arr[i]] = 1;

        for(int i = 1; i<arr.size(); i++)
        {
            int root = arr[i];
            for(int j=0; j<i; j++)
            {
                int lc = arr[j];
                if(root%lc == 0 && mp.find(root/lc) != mp.end())
                {
                    mp[root] += mp[lc] * mp[root/lc];
                }
            }
        }

        int result = 0;
        for(auto &i:mp)
        {
            result = (result + i.second) % MOD;
        }

        return result;
    }
};