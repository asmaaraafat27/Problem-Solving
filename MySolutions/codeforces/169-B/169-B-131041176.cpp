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
int main()
{
    fast;
    string a,s;
    int j=0;
    cin>>a>>s;
    sort(s.rbegin(),s.rend());
    for(int i=0;i<a.size()&&s.size();i++)
    {
        if(a[i]<s[j])
        {
            a[i]=s[j],j++;
        }
    }
    cout<<a;
}