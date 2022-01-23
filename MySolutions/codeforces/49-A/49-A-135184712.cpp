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
    string s,ss={0};
    getline(cin,s);
    for(int i=0; i<s.size();i++)
    {
         s[i] = tolower(s[i]);
        if(s[i]!=' ')
        {
           ss +=s[i];
        }
    }
        if(ss[ss.size()-2] == 'a' || ss[ss.size()-2] == 'e' || ss[ss.size()-2] == 'i'
           || ss[ss.size()-2] == 'o' || ss[ss.size()-2] == 'u' || ss[ss.size()-2] == 'y')
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
}
int main()
{
   fast;
   solve();
}