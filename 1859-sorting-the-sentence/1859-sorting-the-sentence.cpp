class Solution {
public:
    string sortSentence(string s) {
        map<int,string> mp;
        string s1 = "";
        for(int i=0; i<s.size(); i++)
        {
            char ch = s[i];
            if(ch == '1' || ch == '2' || ch == '3' || ch == '4' || ch == '5' ||
            ch == '6' || ch == '7' || ch == '8' || ch == '9')
            {
                mp[ch] = s1;
                s1.clear();
            }
            else if(ch != ' ')
            {
                s1.push_back(ch);
            }
        }
        string ans = "";
        for(auto i:mp)
        {
            string s2 = i.second;
            for(int j=0; j<s2.size(); j++)
            {
                ans += s2[j];
            }
            ans += ' ';
        }
        ans.pop_back();

        return ans;
    }
};