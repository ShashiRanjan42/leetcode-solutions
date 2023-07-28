class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> v;
        int a = 0;
        for(int i=0; i<nums.size(); i++)
        {
            a += nums[i];
            v.push_back(a);
        }
        return v;
    }
};