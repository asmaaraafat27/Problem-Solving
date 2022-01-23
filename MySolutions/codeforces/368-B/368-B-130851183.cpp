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
int ind[1000005];
int pri[1000005];
int main()
{
    fast;
    int n,m,l;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=n-1;i>=0;i--)
    {
        if(ind[arr[i]]==0)
        {
            pri[i]=pri[i+1]+1;
        }
        else
        {
            pri[i]=pri[i+1];
        }
        ind[arr[i]]=1;
    }
    while(m--)
    {
        cin>>l;
        cout<<pri[l-1]<<endl;
    }
}