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
    int n;
    cin>>n;
    vector<int>arr(n*2), freq(n*2+1);
    int m = 0, cnt = 0;
    for(int i=0; i<n*2; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n*2; i++)
    {
        freq[arr[i]]++;
        if(freq[arr[i]]==2)
        {
            cnt--;
        }
        else
        {
            cnt++;
        }
        m = max(cnt , m);
    }
    cout<<m;

}