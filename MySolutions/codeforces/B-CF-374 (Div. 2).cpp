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
    int n,k;
    cin>>n>>k;
    string s, ss= "";
    while(n--)
    {
        cin>>s;
        cnt[s.size()]++;
    }
    cin>>ss;
    int len = ss.size();
    int sum = 0;
    for(int i=1; i<len; i++)
    {
        sum += cnt[i];
    }
    int best = sum + (sum/k) *5 + 1;
    sum += (cnt[len] - 1);
    int worst = sum + (sum/k) *5 + 1;

    cout<<best << " " <<worst;
}
/* stuff you should look for
	* int overflow, array bounds
	* special cases (n=1?)
	* do smth instead of nothing and stay organized
	* WRITE STUFF DOWN
	* DON'T GET STUCK ON ONE APPROACH
*/
