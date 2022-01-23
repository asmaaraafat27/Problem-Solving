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
        int t;
    cin>>t;
    string s;
    cin.ignore(0);
    while(t--)
    {
        cin>>s;
        if(s.size()>10)
        {
            cout<<s[0]<<s.size()-2<<s[s.size()-1]<<endl;
        }
        else
        {
            cout<<s<<endl;
        }
    }
}
int main()
{
   fast;
   solve();
}