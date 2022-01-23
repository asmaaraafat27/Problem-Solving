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
    int y,w;
    cin>>y>>w;
    int m = max(y,w);
	if(m == 1)
	{
		cout << 1 << "/" << 1 << endl ;
	}
	else if (m == 2)
	{
		cout << 5 << "/" << 6 << endl ;
	}
	else if (m == 3)
	{
		cout << 2 << "/" << 3 << endl ;
	}
	else if (m == 4)
	{
		cout << 1 << "/" << 2 << endl ;
	}
	else if (m == 5)
	{
		cout << 1 << "/" << 3 << endl ;
	}
	else if (m == 6)
	{
		cout << 1 << "/" << 6 << endl ;
	}
}