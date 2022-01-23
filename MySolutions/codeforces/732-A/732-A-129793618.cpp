/*Please if you won't accept my solution,
   you should respect my effort */

#include <bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
ll calc(ll a, ll b, ll n)
{
    return ((a+b)*n)/2;
}
int main()
{
  fast;
  ll cnt=0;
  int k,r;
  cin>>k>>r;
  for(int i=1;i<=9;i++)
  {
      cnt = i*k;
      if(cnt%10==0 || (cnt-r)%10==0)
      {
          cout<<i<<endl;
          break;
      }
  }
}