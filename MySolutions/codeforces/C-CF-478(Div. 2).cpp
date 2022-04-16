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
    ll n, q;
    cin>>n>>q;
    ll arr[n+1], pre[n+1] ={0};
    ll qq, cnt =0;
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
        pre[i] = pre[i-1] + arr[i];
    }
    for(int i=1; i<=q; i++)
    {
       cin>>qq;
       cnt += qq;
       ll ind = upper_bound(pre+1, pre+n+1, cnt)-(pre+1);
       if(n == ind)
       {
           cout<<n << endl;
           cnt =0;
       }
       else
       {
           cout<< n - ind<<endl;
       }
    }
}
/* stuff you should look for
	* int overflow, array bounds
	* special cases (n=1?)
	* do smth instead of nothing and stay organized
	* WRITE STUFF DOWN
	* DON'T GET STUCK ON ONE APPROACH
*/
