class Solution {
public:
    void solve(string &front, queue<string>& q, unordered_set<string> &st)
    {
        for(int i=0; i<4; i++)
        {
            char ch = front[i];

            char dec = ch=='0' ? '9' : ch-1;
            char inc = ch=='9' ? '0' : ch+1;

            front[i] = dec;
            if(st.find(front) == st.end())
            {
                st.insert(front);
                q.push(front);
            }

            front[i] = inc;
            if(st.find(front) == st.end())
            {
                st.insert(front);
                q.push(front);
            }

            front[i] = ch;
        }
    }
    int openLock(vector<string>& deadends, string target) {
        unordered_set<string> st(deadends.begin(), deadends.end());

        queue<string> q;
        q.push("0000");

        if(st.find("0000") != st.end())
        return -1;

        int count = 0;

        while(!q.empty())
        {
            int size = q.size();

            while(size--)
            {
                string front = q.front();
                q.pop();

                if(target == front)
                return count;

                solve(front,q,st);
            }

            count++;
        }

        return -1;
    }
};