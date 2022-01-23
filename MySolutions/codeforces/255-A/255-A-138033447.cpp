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
void solve()
{
    int n, a=0, b=0, c=0, arr;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>arr;
        if(i%3 == 1)
        {
           a += arr;
        }
        else if(i%3 == 2)
        {
           b += arr;
        }
        else
        {
           c += arr;
        }
    }
    if(a>b && a>c)
        cout<<"chest";
    else if(b>a && b>c)
        cout<<"biceps";
    else
        cout<<"back";
}
int main()
{
    fast;
    solve();
}