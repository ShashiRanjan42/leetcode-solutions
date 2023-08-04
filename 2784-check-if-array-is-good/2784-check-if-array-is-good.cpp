class Solution {
public:
    bool isGood(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0; i<nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        int j = 1;
        int count = 0;
        int flag = 0;
        for(auto i:mp)
        {
            if((i.first == j && i.second == 2))
            {
                count += 2;
                flag = 1;
            }
            else if(i.first == j && i.second == 1)
            {
                j++;
                count++;
            }
        }
        if(count == nums.size() && flag == 1)
        return true;
        else
        return false;
    }
};