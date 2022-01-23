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
    int n ;
    cin >> n ;
    int arr[n] , arr2[n];
 
    for(int i = 1 ; i <= n ; i ++)
    {
        cin >> arr[i];
    }
 
    for(int i = 1 ; i <= n ; i ++)
    {
        arr2[arr[i]] = i ;
    }
 
    for(int i = 1 ; i <= n ; i++)
    {
        cout<<arr2[i]<< " " ;
    }
}
int main()
{
   fast;
   solve();
}