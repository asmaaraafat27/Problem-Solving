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
int main()
{
   fast;
   int t;
   cin>>t;
   while(t--)
   {
       ll n;
       cin>>n;
       ll ans = calc(1,n,n);
       vector<ll>power;
       power.push_back(1);
       for(int i=1;i<32;i++)
       {
           power.push_back(power[i-1]*2);
       }
       ll sum =0;
       for(int i=0;i<32;i++)
       {
           if(power[i]<=n)
           {
               sum+=power[i];
           }
       }
       cout<<ans-(2*sum)<<endl;
   }
   return 0;
}