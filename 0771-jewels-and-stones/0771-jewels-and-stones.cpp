class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char,int> mp;
        for(int i=0; i<stones.size(); i++)
        {
            mp[stones[i]]++;
        }

        int ans = 0;
        for(auto i:mp)
        {
            for(int j=0; j<jewels.size(); j++)
            {
                if(i.first == jewels[j])
                ans += i.second;
            }
        }
        return ans;
    }
};