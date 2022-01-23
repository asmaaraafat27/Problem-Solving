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
    int n,p,q,c=0;
    cin>>n;
    while(n--)
    {
       cin>>p>>q;
       if(abs(p-q)>=2)
       {
           c++;
       }
    }
    cout<<c;
}