/*
   Authar: Asmaa Raafat.
*/
/////////////////////////////"THINK TWICE... CODE ONCE"/////////////////////////////////.
#include <bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int arr[33];
int main()
{
    #ifndef ONLINE_JUDGE
    //freopen("fight.txt", "rt", stdin);
    #endif
    fast;
    int n,k,cnt=0,ct=0;
	string s;
	cin>>n>>k>>s;
	for(int i=0; i<n; i++){
		ct++;
		if(ct == k)
		{
			arr[s[i]-'a']++;
			cnt++;
			ct = 0;
		}
		if(s[i+1] != s[i])
		 ct = 0;
	}
	sort(arr,arr+26);
	cout<<arr[25];
}
/* stuff you should look for
	* int overflow, array bounds
	* special cases (n=1?)
	* do smth instead of nothing and stay organized
	* WRITE STUFF DOWN
	* DON'T GET STUCK ON ONE APPROACH
*/
