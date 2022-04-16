/*
   Authar: Asmaa Raafat.
*/
/////////////////////////////"THINK TWICE... CODE ONCE"/////////////////////////////////.
#include <bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int arr[100010];
ll z;
int main()
{
    #ifndef ONLINE_JUDGE
    //freopen("fight.txt", "rt", stdin);
    #endif
    fast;
    int n,m;
	cin>>n>>m;
	for(int i=0; i<n; i++)
    {
		int x,y;
		cin>>x>>y;
		z += min(x,y);
		arr[i]= min(x,y) - min(2*x,y);
	}
	sort(arr,arr+n);
	for(int i=0; i<m; i++)
	{
		z -= arr[i];
	}
	cout<<z;
}
/* stuff you should look for
	* int overflow, array bounds
	* special cases (n=1?)
	* do smth instead of nothing and stay organized
	* WRITE STUFF DOWN
	* DON'T GET STUCK ON ONE APPROACH
*/
