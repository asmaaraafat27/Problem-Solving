/*Please if you won't accept my solution,
 you should respect my effort*/

#include <bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
ll calc(ll a, ll b, ll n)
{
    return ((a+b)*n)/2;
}
void solve()
{
    int n, k, l, c, d, p, nl, np;
    cin>> n>> k>> l>> c>> d>> p>> nl>> np;
    ll ans = min(min((k * l)/nl ,c * d) , p / np)/n;
    cout<<ans;
}
int main()
{
    fast;
    solve();
}