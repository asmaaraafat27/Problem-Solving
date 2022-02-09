/*
   author: Asmaa Raafat.
*/

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
}
int main()
{
    ////"THINK TWICE... CODE ONCE"//.
    #ifndef ONLINE_JUDGE
    //freopen("fight.txt", "rt", stdin);
    #endif
    fast;
    //solve();
    int n, en=0, x=0, sol=0, a;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        en += x-a;
        if(en < 0)
        {
            sol += -en;
            en =0;
        }
        x = a;
    }
    cout<<sol;
}
