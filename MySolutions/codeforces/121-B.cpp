#include <bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    ////"THINK TWICE... CODE ONCE"//.
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int ch =0;
        string s;
        cin>>s;
        for(int i =s.size()-1; i>=1; i--)
        {
            if(s[i]-'0' + s[i-1]-'0' >= 10)
            {
                ch = 1;
                cout<<s.substr(0,i-1)<<s[i]-'0'+ s[i-1]-'0'<< s.substr(i+1)<<endl;
                break;
            }
        }
        if(ch == 0)
        {
            cout<<char(s[0]-'0'+s[1]-'0'+'0')<<s.substr(2,s.size()-2)<<endl;
        }
    }
}
