class Solution {
public:
    int maxDepth(string s) {
        stack<int> st;
        int maxi = 0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == '(')
            {
                st.push(s[i]);
            }
            else if(s[i] == ')')
            {
                int size = st.size();
                maxi = max(size,maxi);
                st.pop();
            }
        }
        return maxi;
    }
};