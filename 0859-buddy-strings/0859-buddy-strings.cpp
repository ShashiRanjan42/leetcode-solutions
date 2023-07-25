class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.size() != goal.size())
        return false;

        vector<int> v;

        if (s == goal) {
            unordered_set<char> distinctChars(s.begin(), s.end());
            return distinctChars.size() < s.length();
        }

        for(int i=0; i<s.size(); i++)
        {
            if(s[i] != goal[i])
            {
                v.push_back(i);
            }
        }
        if(v.size() != 2)
        return false;

        swap(s[v[0]],s[v[1]]);

        if(s == goal)
        return true;
        else
        return false;
    }
};