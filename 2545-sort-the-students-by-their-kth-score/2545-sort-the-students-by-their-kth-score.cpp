class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        map<int,vector<int>> mp;
        vector<vector<int>> ans;
        vector<int> v;
        int n = score.size();
        int n1 = score[0].size();
        // v.push_back(n);
        for(int i =0; i<n; i++)
        {
            for(int j=0; j<n1; j++)
            {
                v.push_back(score[i][j]);
            }
            mp[score[i][k]] = v;
            v.clear();
        }

        for(auto i:mp)
        {
            ans.push_back(i.second);
        }
        reverse(ans.begin(),ans.end());
        // ans.push_back(v);
        return ans;
    }
};