class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0, y = mat.size()-1;
        for(int i=0; i<mat.size(); i++)
        {
                if( i == y)
                {
                    sum+= mat[i][y];
                }
                else
                {
                    sum += (mat[i][i] + mat[i][y]);
                }
                y--;
        }
        return sum;
    }
};
