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
ll arr[200004], arr2[200004];
void solve()
{
  int n,q;
  ll mx=0;
  cin>>n>>q;
  for(int i=0; i<n; i++)
  {
      cin>>arr[i];
  }
  int l,r;
  while(q--)
  {
      cin>>l>>r;
      l--;
      r--;
      arr2[l]++;
      if(r<n)
      {
       arr2[r+1]--;
      }
  }
  for(int i=1; i<=n; i++)
  {
      arr2[i] += arr2[i-1];
  }
  
  sort(arr,arr+n);
  sort(arr2,arr2+n);
  
  for(int i=0; i<n; i++)
  {
      mx += arr[i] * arr2[i];
  }
  cout<<mx;

}
int main()
{
   fast;
   solve();
}