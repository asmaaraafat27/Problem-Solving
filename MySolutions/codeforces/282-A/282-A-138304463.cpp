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
int x;
void solve()
{
    int n, cnt=0;
    cin>>n;
    string s;
 
    while(n--)
    {
        cin >> s;
        if(s == "X++" || s == "++X")
        {
            cnt ++ ;
        }
        else
        {
            cnt -- ;
        }
    }
    cout<< cnt;
}
int main()
{
    fast;
    solve();
}