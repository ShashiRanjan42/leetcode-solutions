class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int a = 0;
        int b = 0;
        for(int i=0; i<nums.size(); i++)
        {
            a += nums[i];
            int c = nums[i];
            while(c > 0)
            {
                int rem = c%10;
                b += rem;
                c = c/10;
            }
        }
        return (a-b);  
    }
};