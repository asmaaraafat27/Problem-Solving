/*
   Author: Asmaa Raafat.
*/
/////////////////////////////"THINK TWICE... CODE ONCE"/////////////////////////////////.
#include <bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
ll freq[1000001],arr[500001], n, k;
int main()
{
    #ifndef ONLINE_JUDGE
    //freopen("fight.txt", "rt", stdin);
    #endif
    fast;
    int cnt =0, l =1, m=0, p,q;
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
        if(freq[arr[i]] == 0)
        {
            cnt++;
        }
        freq[arr[i]]++;
        if(cnt > k)
        {
            freq[arr[l]]--;
            if(freq[arr[l]] == 0)
            {
                cnt--;
            }
            l++;
        }
        if(i-l+1 > m)
        {
            m = i-l+1;
            p=l;
            q=i;
        }
    }
    cout<<p <<" " <<q;
}
/* stuff you should look for
	* int overflow, array bounds
	* special cases (n=1?)
	* do smth instead of nothing and stay organized
	* WRITE STUFF DOWN
	* DON'T GET STUCK ON ONE APPROACH
*/
