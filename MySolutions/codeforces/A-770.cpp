/*
   author: Asmaa Raafat.
*/
#include <bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    ////"THINK TWICE... CODE ONCE"//.
    #ifndef ONLINE_JUDGE
    //freopen("fight.txt", "rt", stdin);
    #endif
    fast;
    //solve();
    int t;
    cin>>t;
    string sa;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        sa = s;
        reverse(s.begin(),s.end());
        if(k==0)
        {
            cout<<1<<endl;
        }
        if(k==1)
        {
        if(s == sa)
        {
           cout<<1<<endl;
        }
        else
        {
            cout<<2<<endl;
        }
        }
        if( k >1)
        {
           if(s == sa )
           {
               cout<<1<<endl;
           }
        else
        {
            cout<<2<<endl;
        }

        }
    }
  return 0;
}
