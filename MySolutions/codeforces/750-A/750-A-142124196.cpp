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
bool preceed(int x, int y)
{
    return abs(x)>abs(y);
}
int main()
{
    ////"THINK TWICE... CODE ONCE"//.
    #ifndef ONLINE_JUDGE
    //freopen("fight.txt", "rt", stdin);
    #endif
    fast;
    //solve();

    int n,m;
    cin>>n>>m;
    int cnt =0, cnt1 =0;
    for(int i=1; i<=n; i++)
    {
        cnt += 5*i;
        if( cnt + m > 240 )
        {
            break;
        }
        cnt1 ++;
    }
    cout <<cnt1;

}