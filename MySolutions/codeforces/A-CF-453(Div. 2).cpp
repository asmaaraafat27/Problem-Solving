/*
   Authar: Asmaa Raafat.
*/
/////////////////////////////"THINK TWICE... CODE ONCE"/////////////////////////////////.
#include <bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    //freopen("fight.txt", "rt", stdin);
    #endif
    fast;
    int n, m, ask=0,a,b;
    bool nn = 0;
    cin>>n>>m;
    while(n--)
    {
        cin>>a>>b;
        if(a>ask)
        {
            nn=1;
        }
        else
        {
            ask = max(ask,b);
        }
    }
    if( m>ask || nn==1 )
        cout<<"NO";
    else
        cout<<"YES";
}
/* stuff you should look for
	* int overflow, array bounds
	* special cases (n=1?)
	* do smth instead of nothing and stay organized
	* WRITE STUFF DOWN
	* DON'T GET STUCK ON ONE APPROACH
*/
