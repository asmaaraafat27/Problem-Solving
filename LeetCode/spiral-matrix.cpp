class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mx) {
        int top = 0;
        int left = 0;
        int bottom = mx.size()-1;
        int right = mx[0].size()-1;
        vector<int> res;
            if(top<=bottom)
            {
                for(int i = left; i <= right; i++)
                {
                    res.push_back(mx[top][i]);
                }
                top++;
            }
            if(left<=right)
            {
                for(int i = top; i <= bottom; i++)
                {
                    res.push_back(mx[i][right]);
                }
                right--;
            }
            if(top<=bottom)
            {
                for(int i = right; i >= left; i--)
                {
                    res.push_back(mx[bottom][i]);
                }
                bottom--;
            }
            if(left<=right)
            {
                for(int i = bottom; i >= top; i--)
                {
                    res.push_back(mx[i][left]);
                }
                left++;
            }
        }
        return res;
    }
};
