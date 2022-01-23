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
int freq[26];
void solve()
{
    int x;
    cin>>x;
    if( x>2 && x%2==0)
        cout<<"YES";
    else
        cout<<"NO";
}
int main()
{
   fast;
   solve();
}