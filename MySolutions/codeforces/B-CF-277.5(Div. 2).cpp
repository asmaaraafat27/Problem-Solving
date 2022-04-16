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
    int n, m, cnt =0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    cin>>m;
    int arr2[m];
    for(int i=0; i<m; i++)
    {
        cin>>arr2[i];
    }
    sort(arr2, arr2+m);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(abs(arr[i] - arr2[j]) < 2)
            {
                cnt++;
                arr2[j] = -1;
                break;
            }
        }
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
