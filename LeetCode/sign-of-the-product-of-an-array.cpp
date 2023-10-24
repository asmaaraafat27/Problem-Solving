class Solution {
public:
    int arraySign(vector<int>& nums)
    {
        int c = 1;
        for(auto it: nums)
        {
            if(it == 0)
            {
                return 0;
            }
            if(it < 0)
            {
                c = -c;
            }
        }
        return c;
    }
};
