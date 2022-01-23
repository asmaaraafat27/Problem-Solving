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
    string s , ss;
    cin >> s >> ss;
    reverse(s.begin(),s.end());
    if(s == ss )
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
int main()
{
   fast;
   solve();
}