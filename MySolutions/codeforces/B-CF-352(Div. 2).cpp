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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0, ans=0;
    for(int i=0; i<n; i++)
    {
       freq[s[i]-97]++;
    }
    for(int i=0; i<26; i++)
    {
        if(freq[i] == 0)
        {
            cnt++;
        }
        else
        {
            ans += freq[i]-1;
        }
    }
    if(cnt < ans)
    {
        cout<<-1;
    }
    else
    {
        cout<<ans;
    }
}
/* stuff you should look for
	* int overflow, array bounds
	* special cases (n=1?)
	* do smth instead of nothing and stay organized
	* WRITE STUFF DOWN
	* DON'T GET STUCK ON ONE APPROACH
*/
