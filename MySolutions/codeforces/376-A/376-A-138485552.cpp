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
    string x;
	cin >>x;
 
	long long  sum=0,sum1=0,flag=0;
 
	for (int i=0;i<x.size();i++)
    {
        if(x[i]=='^')
            flag=i;
 
    }
    for (int i=flag;i<x.size();i++)
    {
        if(x[i]>='0'&&x[i]<='9')
        {
            x[i]-='0';
            sum+=(x[i]*(i-flag));
        }
    }
    for (int i=flag;i>=0;i--)
    {
          if(x[i]>='0'&&x[i]<='9')
        {
            x[i]-='0';
            sum1+=(x[i]*(flag-i));
        }
 
    }
 if(sum==sum1)
    cout<<"balance";
 else if (sum1>sum)
    cout<<"left";
 else
    cout<<"right";
}
int main()
{
    fast;
    solve();
}