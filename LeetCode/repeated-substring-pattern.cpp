class Solution {
public:
    bool repeatedSubstringPattern(string s) {
    string ss ="";
    for(int i=s.size()-1; i>=0; i--)
    {
        if(i == 0) return false;
        string ss = s.substr(0,i);
        if(s+ss == ss+s) return true;
    }
    return false;
    }
};
