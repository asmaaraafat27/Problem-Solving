class Solution {
public:
    int maximumWealth(vector<vector<int>>& v) {
        int sum =0, ans = 0;
        for(int i=0; i<v.size(); i++)
        {
            sum =0;
            for(int j=0; j<v[i].size(); j++)
            {
                sum+= v[i][j];
            }
            ans = max(ans, sum);
        }
        return ans;
    }
};
