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
    string s,ss;
    cin>>s;
    cin>>ss;
    int deli = s.find('|');
    string heys = s.substr(0,deli);
    string heyss = s.substr(deli+1);
    for(int i=0 ;i<ss.size();i++)
    {
        if( heys.size() >= heyss.size() )
        {
            heyss += ss[i];
        }
        else
        {
            heys += ss[i];
        }
    }
    if( heys.size() == heyss.size())
        cout<< heys << "|" << heyss;
    else
        cout<<"Impossible";
}
int main()
{
    fast;
    solve();
}