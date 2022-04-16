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
    int arr[n+1];
    int cnt =0, m=0, cn=0;
    bool f = false ;
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    for(int i=1; i<=n; i++)
    {
        if(arr[i] == 1)
        {
           cnt++;
        }
        if(arr[i] == 0 && !f)
        {
            f = true;
        }
        if(f)
        {
            if( arr[i] == 0)
            {
                cn++;
            }
            else if(cn >0)
            {
                cn--;
            }
            m = max(m, cn);
        }
    }
    if(cnt == n)
        cout<<n-1;
    else
        cout<<cnt + m;
}
/* stuff you should look for
	* int overflow, array bounds
	* special cases (n=1?)
	* do smth instead of nothing and stay organized
	* WRITE STUFF DOWN
	* DON'T GET STUCK ON ONE APPROACH
*/
