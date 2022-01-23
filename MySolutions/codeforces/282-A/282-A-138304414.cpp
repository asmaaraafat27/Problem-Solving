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
    int n;
    cin>>n;
    int nn = n;
    string s;
    while(n--)
    {
        cin>>s;
        if(s[0] == 'X' && s[1] == '+' && s[2]=='+' && nn==1)
        {
            x=0;
        }
        else if(s[0] == 'X' && s[1] == '+' && s[2]=='+')
        {
           x++;
        }
        if(s[0] == '+' && s[1]=='+' && s[2]=='X')
        {
            x++;
        }
        else if(s[0] == '-' && s[1]=='-' && s[2]=='X')
        {
            x--;
        }
        if(s[0] == 'X' && s[1] == '-' && s[2]=='-' && nn==1 )
        {
            x=-1;
        }
        else if(s[0] == 'X' && s[1] == '-' && s[2]=='-')
        {
           x--;
        }
    }
    cout<<x;
}
int main()
{
    fast;
    solve();
}