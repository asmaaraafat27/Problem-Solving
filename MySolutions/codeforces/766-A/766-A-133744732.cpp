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
    string a,b;
    cin>>a>>b;
    if(a == b)
        cout<<-1;
    else
        cout<<max(a.size(),b.size());
}
int main()
{
  fast;
  solve();
}