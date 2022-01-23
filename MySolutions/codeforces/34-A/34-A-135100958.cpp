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
   int n;
   cin>>n;
   int arr[n];
   for(int i=0 ;i<n; i++)
   {
       cin>>arr[i];
   }
   int cnt = 1;
   int j = n;
   int mn = abs(arr[0]-arr[n-1]);
   for(int i=0; i<n; i++)
   {
      if((abs(arr[i]-arr[i+1])) < mn)
      {
         mn = abs(arr[i]-arr[i+1]);
         cnt = i+1;
         j = i+2;
      }
   }
   cout<< cnt << " " << j;
}
int main()
{
   fast;
   solve();
}