class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>v(0);
        for(auto it: nums)
        {
            if(it != 0)
            {
                v.push_back(it);
            }
        }
        while(v.size() != nums.size())
        {
            v.push_back(0);
        }
        nums = v;
    }
};
