class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> v1;
        vector<int> v2;
        vector<int> ans;

        int a = 0;
        int b = 0;
        for(int i=0; i<nums.size(); i++)
        {
            v1.push_back(a);
            a += nums[i];
        }
        for(int i=nums.size()-1; i>=0; i--)
        {
            v2.push_back(b);
            b += nums[i];
        }
        reverse(v2.begin(),v2.end());
        for(int i=0; i<v1.size(); i++)
        {
            int c = abs(v1[i] - v2[i]);
            ans.push_back(c);
        }
        return ans;
    }
};