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
    int n;
    cin>>n;
    int arr[n],arr2[n];
    ll cnt=0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i]>>arr2[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[i] == arr2[j])
            {
                cnt++;
            }
        }
    }
    cout<<cnt;
}
int main()
{
    fast;
    solve();
}