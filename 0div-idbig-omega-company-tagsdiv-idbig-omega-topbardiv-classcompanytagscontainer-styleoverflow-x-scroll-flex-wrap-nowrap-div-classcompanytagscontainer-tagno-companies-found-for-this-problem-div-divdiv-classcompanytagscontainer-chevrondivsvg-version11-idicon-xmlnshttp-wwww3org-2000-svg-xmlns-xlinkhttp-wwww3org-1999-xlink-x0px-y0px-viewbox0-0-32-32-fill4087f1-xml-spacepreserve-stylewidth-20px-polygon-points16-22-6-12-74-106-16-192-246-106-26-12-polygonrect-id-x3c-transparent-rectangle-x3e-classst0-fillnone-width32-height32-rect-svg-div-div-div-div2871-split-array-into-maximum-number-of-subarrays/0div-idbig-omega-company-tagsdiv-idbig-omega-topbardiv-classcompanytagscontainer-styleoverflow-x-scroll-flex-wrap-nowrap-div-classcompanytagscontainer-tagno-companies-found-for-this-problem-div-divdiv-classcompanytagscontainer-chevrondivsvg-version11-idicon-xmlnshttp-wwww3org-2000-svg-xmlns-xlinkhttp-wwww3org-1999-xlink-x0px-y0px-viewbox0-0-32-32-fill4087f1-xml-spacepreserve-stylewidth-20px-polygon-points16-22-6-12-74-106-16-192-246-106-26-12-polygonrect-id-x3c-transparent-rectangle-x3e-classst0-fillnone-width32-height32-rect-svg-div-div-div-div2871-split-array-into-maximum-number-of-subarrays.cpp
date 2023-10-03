class Solution {
public:
    int maxSubarrays(vector<int>& nums) {
        int temp = nums[0];
        for(int i=1; i<nums.size(); i++)
        {
            temp = temp & nums[i];
        }

        if(temp != 0)
        return 1;

        int count = 0;
        int i = 0;
        while(i < nums.size())
        {
            int val = nums[i];
            i++;
            while(val != 0 && i < nums.size())
            {
                val = val & nums[i];
                i++;
            }
            if(val == 0)
            count++;
        }
        return count;
    }
};