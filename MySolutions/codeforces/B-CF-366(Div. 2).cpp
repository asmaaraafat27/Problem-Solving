/*
   Authar: Asmaa Raafat.
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
    int n;
    cin>>n;
    ll arr[n+1], sum=0;
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    for(int i=1; i<=n; i++)
    {
        sum+=arr[i];
        if((sum-i)%2==0)
            cout<<2<<endl;
        else
            cout<<1<<endl;
    }
}
/* stuff you should look for
	* int overflow, array bounds
	* special cases (n=1?)
	* do smth instead of nothing and stay organized
	* WRITE STUFF DOWN
	* DON'T GET STUCK ON ONE APPROACH
*/
