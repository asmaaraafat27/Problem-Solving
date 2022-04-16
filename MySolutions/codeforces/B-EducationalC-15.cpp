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
    ll n, ans =0;
    cin>>n;
    ll a[n];
    map<ll, ll>mp;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        for(int j=0; j<=32; j++)
        {
            ans += mp[pow(2,j)-a[i]];
        }
        mp[a[i]]++;
    }
    cout<<ans;
}
/* stuff you should look for
	* int overflow, array bounds
	* special cases (n=1?)
	* do smth instead of nothing and stay organized
	* WRITE STUFF DOWN
	* DON'T GET STUCK ON ONE APPROACH
*/
