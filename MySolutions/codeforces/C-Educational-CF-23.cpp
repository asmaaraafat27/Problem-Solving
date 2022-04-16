/*
   Authar: Asmaa Raafat.
*/
/////////////////////////////"THINK TWICE... CODE ONCE"/////////////////////////////////.
#include <bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
ll k, mid;
bool check(ll x)
{
    ll sum =0;
    while(x>0)
    {
       sum += x%10;
       x /= 10;
    }
    return(mid - sum >= k);
}
int main()
{
    #ifndef ONLINE_JUDGE
    //freopen("fight.txt", "rt", stdin);
    #endif
    fast;
    ll n;
    cin>>n>>k;
    ll l =0, r =n;
    while(l<=r)
    {
        mid = l + (r-l)/2;
        if(check(mid))
        {
            r = mid-1;
        }
        else
        {
            l = mid+1;
        }
    }
    cout<<n-r;
}
/* stuff you should look for
	* int overflow, array bounds
	* special cases (n=1?)
	* do smth instead of nothing and stay organized
	* WRITE STUFF DOWN
	* DON'T GET STUCK ON ONE APPROACH
*/
