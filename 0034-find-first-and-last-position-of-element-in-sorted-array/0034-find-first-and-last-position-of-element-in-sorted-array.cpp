class Solution {
public:
    int lowerbound(vector<int>& nums, int target)
    {
        int s = 0, e = nums.size()-1;

        while(s <= e)
        {
            int mid = s + (e-s)/2;

            if (nums[mid] < target) {
            s = mid + 1;
            } 
            else{
                e = mid - 1;
            }
        }
        if(s >= 0 && s < nums.size())
        {
            if(nums[s] == target)
            return s;
            else
            return -1;
        }
        else
        return -1;
    }
    int uperbound(vector<int>& nums, int target)
    {
        int s = 0, e = nums.size()-1;

        while(s <= e)
        {
            int mid = s + (e-s)/2;

            if(nums[mid] > target)
            {
                e = mid-1;
            }
            else
            {
                s = mid+1;
            }
        }
        if(e >= 0 && e < nums.size())
        {
            if(nums[e] == target)
            return e;
            else
            return -1;
        }
        else
        return -1;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int s = 0, e = nums.size()-1;

        int x = lowerbound(nums,target);
        int y = uperbound(nums,target);


        return {x,y};

        // while(s <= e)
        // {
        //     int mid = s + (e-s)/2;

        //     if(nums[mid] == target)
        //     {
        //         int x = mid;
        //         while(nums[mid] == target)
        //         {
        //             mid = mid+1;
        //         }
        //         int y = mid;

        //         mid = x;
        //         while(nums[mid] == target)
        //         {
        //             mid = mid-1;
        //         }
        //         x = mid;

        //         return {x+1,y-1};
        //     }

        //     if(nums[mid] > target)
        //     {
        //         e = mid-1;
        //     }
        //     else
        //     {
        //         s = mid + 1;
        //     }
        // }
        // return {-1,-1};
    }
};