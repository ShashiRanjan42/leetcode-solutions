class Solution {
public:
    vector<int> twoSum(vector<int>& a, int t) {
        
          vector<int> v;
        int n =a.size();
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n && j != i; j++)
            {
                if(a[i]+a[j] == t)
                {
                    v.push_back(i);
                    v.push_back(j);
                   // return v;
                }
            }
        }
        return v;
    }
};