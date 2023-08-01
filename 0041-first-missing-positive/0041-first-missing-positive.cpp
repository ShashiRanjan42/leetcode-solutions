class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        int hash[n+1];
        for(int i=0; i<n+1; i++)
        {
            hash[i] = 0;
        }

        for(int i=0; i<n; i++)
        {
            if(nums[i] > 0 && nums[i] < n+1)
            {
                hash[nums[i]]++;
            }
        }

        for(int i=1; i<n+1; i++)
        {
            if(hash[i] == 0)
            return i;
        }
        return n+1;
    }
};