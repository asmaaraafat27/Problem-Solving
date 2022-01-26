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
        string s, ss="", sss="";
        cin>>s;
        int n = (s.size())/2;
        for(int i=0; i<n; i++)
        {
            ss += s[i];
        }
        sss = s.substr(n,s.size());
        if( sss == ss )
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
