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
bool PrimeFunc(int n)
{
    if(n == 1)
        return false ;

    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i == 0)
        {
            return false ;
        }
    }
    return true;
}
void solve()
{
    int n,cost=0;
    cin>>n;
    vector <int> a(n),p(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i] >> p[i];
    }
    int ans = INT_MAX;
    for(int i=0; i<n; i++)
    {
        ans = min(ans,p[i]);
        cost += ans * a[i];
    }
    cout<<cost;
}
int main()
{
    fast;
    solve();
}