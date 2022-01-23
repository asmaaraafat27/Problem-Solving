/*Please if you won't accept my solution,
 you should respect my effort*/

 /////give it a trial !!////

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
  ll n,ind,mid;
  cin>>n>>ind;
  mid = n/2;
  if(n%2==1)
   mid++;
  if(ind<=mid)
    cout<<(ind-1)*2+1;
  else
    cout<<(ind-mid)*2;
}
int main()
{
    fast;
    solve();
}