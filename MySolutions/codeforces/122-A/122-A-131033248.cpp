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
    int n,c=0;
    int arr[13]={4,7,44,77,777,444,747,474,47,74,774,447,477};
    cin>>n;
    for(int i=0;i<13;i++)
    {
        if(n%arr[i]==0)
        {
           c++;
           break;
        }
    }
    if(c==1)
     cout<<"YES";
    else
     cout<<"NO";
}