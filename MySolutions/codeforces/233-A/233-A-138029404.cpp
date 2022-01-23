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
    int n;
    cin>>n;
    if( n % 2 != 0)
    {
        cout<<-1;
    }
    else
    {
        for(int i=1; i<n; i+=2)
        {
           cout<<i+1<<" "<<i<<" ";
        }

    }
}
int main()
{
    fast;
    solve();
}