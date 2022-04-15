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
        ll n,m,x;
        cin>>n;
        string s[10000];
        int a[10000];
        map<string,ll>mp;
        for(int i=0;i<n;i++)
        {
            cin>>s[i]>>a[i];
            mp[s[i]]+=a[i];
        }
        ll mx=0;
        for(int i=0;i<n;i++)
        {
            mx=max(mp[s[i]],mx);
        }
        map<string,ll>mp2;
        string ans;
        for(int i=0;i<n;i++)
        {
            mp2[s[i]] += a[i];
            if(mp2[s[i]] >= mx && mp[s[i]] == mx)
            {
                ans = s[i];
                break;
            }
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
