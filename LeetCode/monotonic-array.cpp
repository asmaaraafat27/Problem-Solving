class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int c=0, cc=0, tw=0;
        for(int i=0; i<nums.size()-1; i++)
        {
            if(nums[i] < nums[i+1])
            {
                c++;
            }
            else if(nums[i]>nums[i+1])
            {
                cc++;
            }
            else
            {
                tw++;
            }
        }
        if(c!=0 && cc!=0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};
