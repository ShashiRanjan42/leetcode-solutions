class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int> mp;
        vector<int> ans;
        for(int i=0; i<s.size(); i++)
        {
            mp[s[i]] = i;
        }

        int maxIndex = 0, lastIndex = 0;
        for(int i=0; i<s.size(); i++)
        {
            maxIndex = max(maxIndex,mp[s[i]]);

            if(i == maxIndex)
            {
                int a = maxIndex - lastIndex + 1;
                lastIndex = i+1;
                ans.push_back(a);
            }
        }

        return ans;
    }
};