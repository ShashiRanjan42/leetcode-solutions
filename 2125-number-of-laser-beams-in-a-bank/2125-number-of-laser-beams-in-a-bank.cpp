class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> laser;
        for(int i=0; i<bank.size(); i++)
        {
            string s = bank[i];
            int count = 0;
            for(int j=0; j<s.size(); j++)
            {
                if(s[j] == '1')
                count++;
            }
            if(count != 0)
            laser.push_back(count);
        }
        int ans = 0;
        if(laser.size() == 0)
        return 0;
        for(int i = 0; i<laser.size()-1; i++)
        {
            int a = laser[i]*laser[i+1];
            ans += a;
        }
        return ans;
    }
};