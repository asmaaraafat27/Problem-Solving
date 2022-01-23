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
        return false;

    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    int n;
    ll mm =0, m=0;
    cin>>n;
    int arr[n];
    int lux[n] = {0};
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=n-1; i>=0; i--)
    {
       if(arr[i]> m)
       {
           lux[i] += 0;
           m = arr[i];
       }
       else
       {
           mm = abs(arr[i] - m);
           lux[i] += (mm+1);
       }
    }
    for(int i =0 ; i<n;i++)
    {
       cout<< lux[i]<<" ";
    }
}
int main()
{
    ////"THINK TWICE... CODE ONCE"//.
    #ifndef ONLINE_JUDGE
    //freopen("fight.txt", "rt", stdin);
    #endif
    fast;
    solve();
}