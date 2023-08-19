class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = 0;
        for(int i=0; i<s.size(); i++)
        {
            set<int> st;
            for(int j=i; j<s.size(); j++)
            {
                if(st.find(s[j]) == st.end())
                {
                    st.insert(s[j]);
                }
                else
                {
                    break;
                }
            }
            int n =st.size();
            len = max(len,n);
        }
        return len;
    }
};