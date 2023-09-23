class Solution {
public:
    bool solve(string s, string p)
    {
        map<char,char> mp;
        map<char,char> mp1;
        for(int i=0; i<s.size(); i++)
        {
            if(mp.find(p[i]) == mp.end())
            {
                // element nhi mila
                mp[p[i]] = s[i];
            }
            else
            {
                if(mp[p[i]] == s[i])
                {
                    continue;
                }
                else
                return false;
            }
        }

        for(int i=0; i<s.size(); i++)
        {
            if(mp1.find(s[i]) == mp1.end())
            {
                // element nhi mila
                mp1[s[i]] = p[i];
            }
            else
            {
                if(mp1[s[i]] == p[i])
                {
                    continue;
                }
                else
                return false;
            }
        }
        return true;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        for(int i=0; i<words.size(); i++)
        {
            string s = words[i];
            bool temp = solve(s,pattern);
            if(temp)
            {
                ans.push_back(s);
            }
        }
        return ans;
    }
};