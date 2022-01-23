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
    int n, cnt=1 , cnt2=0;
    cin>>n;
    string s,ss;
    string team1, team2;
    cin>>s;
    team1 = s;
    for( int i=0; i<n-1; i++)
    {
        cin>>s;
        if( s == team1)
        {
            cnt++;
        }
        else
        {
            cnt2++;
            team2 = s;
        }
    }
    if( cnt > cnt2 )
        cout<<team1;
    else
        cout<<team2;
}
int main()
{
    fast;
    solve();
}