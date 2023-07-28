class Solution {
public:
    string truncateSentence(string s, int k) {
        string s1;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] != ' ')
            {
                s1.push_back(s[i]);
            }
            else
            {
                s1.push_back(' ');
                k--;
            }
            if(k == 0)
            {
                s1.pop_back();
                break;
            }
        }
        return s1;
    }
};