/*Please if you won't accept my solution,
   you should respect my effort */

#include <bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
ll calc(ll a, ll b, ll n)
{
    return ((a+b)*n)/2;
}
int main()
{
  fast;
    ll cnt=1;
    string s,inst;
    cin>>s>>inst;
    for(int i=0; i<inst.size();i++)
    {
        if(inst[i] == s[cnt-1])
        {
            cnt++;
        }
    }
    cout<<cnt;
}