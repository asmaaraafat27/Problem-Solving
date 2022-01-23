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
    int n,cnt=0,c=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=2;i<n;i++)
    {
        if( (arr[i-2] + arr[i-1]) > arr[i] )
        {
            cnt =1;
            break;
        }
    }
    if(cnt == 1)
     cout<<"YES";
    else
     cout<<"NO";
}
int main()
{
  fast;
  solve();
}