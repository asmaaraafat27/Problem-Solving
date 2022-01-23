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
}
int main()
{
    ////"THINK TWICE... CODE ONCE"//.
    #ifndef ONLINE_JUDGE
    //freopen("fight.txt", "rt", stdin);
    #endif
    fast;
    //solve();
    ll a, b, c;
    cin>>a>>b>>c;
    if( a == b )
    {
        cout<<"YES";
        return 0;
    }
    if( c == 0 )
    {
        cout<<" NO";
        return 0;
    }
    if( ((b-a)/c) <= 0 )
    {
        cout<< "NO";
    }
    else
    {
        if( (ll)(b-a)%c )
        {
            cout<<"NO";
        }
        else
        {
            cout<<"YES";
        }
    }
}