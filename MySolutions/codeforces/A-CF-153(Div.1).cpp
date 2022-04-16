/*
   Author: Asmaa Raafat.
*/
/////////////////////////////"THINK TWICE... CODE ONCE"/////////////////////////////////.
#include <bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    //freopen("fight.txt", "rt", stdin);
    #endif
    fast;
    int n, d;
    cin>>n>>d;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    ll l=0, r=0, cnt =0;
    while(r < n)
    {
        while( l<n && arr[r] - arr[l] > d)
            l++;
        cnt += (r-l)*(r-l-1) / 2;
        r++;
    }
    cout<<cnt;
}
/* stuff you should look for
	* int overflow, array bounds
	* special cases (n=1?)
	* do smth instead of nothing and stay organized
	* WRITE STUFF DOWN
	* DON'T GET STUCK ON ONE APPROACH
*/
