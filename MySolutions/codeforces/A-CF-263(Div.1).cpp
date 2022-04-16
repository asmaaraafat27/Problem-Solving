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
    ll ans =0, sum;
    ll arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        ans += arr[i];
    }
    sort(arr, arr+n);
    sum = ans;
    for(int i=0; i<n-1; i++){
        ans += sum;
        sum -= arr[i];
    }
    cout<<ans<<endl;
}
/* stuff you should look for
	* int overflow, array bounds
	* special cases (n=1?)
	* do smth instead of nothing and stay organized
	* WRITE STUFF DOWN
	* DON'T GET STUCK ON ONE APPROACH
*/
