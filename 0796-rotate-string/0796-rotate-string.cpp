class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s == goal)
        return true;
        string s1 = s;

        int i=0,j=s.size();
        while(i<j)
        {
            if(s == goal)
            return true;

            char ch = s[0];
            s.erase(s.begin(),s.begin()+1);
            s.push_back(ch);

            i++;
        }

        return false;
    }
};