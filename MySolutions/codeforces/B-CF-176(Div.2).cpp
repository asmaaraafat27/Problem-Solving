/*
   Author: Asmaa Raafat.
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
    ll n, k;
    cin>>n>>k;
    if( k >= n && n!= 1)
    {
        cout<<1<<endl;
        return 0;
    }
    else if( n == 1)
    {
        cout<<0<<endl;
        return 0;
    }
    else if((k-1)*((k-1)+1)/2 +1 < n)
    {
        cout<<-1<<endl;
        return 0;
    }
    ll l =1, r =k-1;
    while(l <=r)
    {
        ll mid = (l + r)/2;
        ll s = (((k-1)*(k))/2) - (((mid-1)*(mid))/2) + 1;
        if( s >= n)
        {
            l = mid +1;
        }
        else
        {
            r = mid -1;
        }
    }
    cout<<k-l+1<<endl;
}
/* stuff you should look for
	* int overflow, array bounds
	* special cases (n=1?)
	* do smth instead of nothing and stay organized
	* WRITE STUFF DOWN
	* DON'T GET STUCK ON ONE APPROACH
*/
