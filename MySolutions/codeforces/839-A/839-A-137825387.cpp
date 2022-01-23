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
}
int main()
{
    fast;
    //solve();
    int n,k;
    cin>>n>>k;
    int day;
    int sum =0;
    for(int i=1; i<=n; i++)
    {
        cin>>day;
        sum += day;
    k -= min(8,sum);
    sum -= min(8,sum);
    if(k <= 0)
    {
        cout<<i;
        return 0;
    }
    }
    cout<<-1;
}