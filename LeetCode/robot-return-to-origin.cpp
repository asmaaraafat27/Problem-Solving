class Solution {
public:
    bool judgeCircle(string s) {
    int res=0, l=0, d=0, r=0, u=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == 'U' || s[i] == 'R')
        {
            res ++;
        }
        else
        {
            res--;
        }
        if(s[i] == 'U')
        {
            u++;
        }
        else if(s[i] == 'D')
        {
            d++;
        }
        else if(s[i] == 'L')
        {
            l++;
        }
        else
        {
            r++;
        }
    }
    if(res == 0 && (u == d || l == r))
        return true;
    else
        return false;
    }
};
