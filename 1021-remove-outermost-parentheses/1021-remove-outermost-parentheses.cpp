class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<int> st;
        string ans;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == '(')
            {
                //check
                if(st.size() > 0)
                {
                    ans += s[i];
                }
                st.push(s[i]);
            }
            else
            {
                st.pop();
                //check
                if(st.size() > 0)
                {
                    ans += s[i];
                }
            }
        }

        return ans;
    }
};