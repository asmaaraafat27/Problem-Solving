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
    ll cnt1 =0;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n], freq[n+1] ={0};
        cnt1 =0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            freq[arr[i]]++;
        }
        for(int i=0; i<n-1; i++)
        {
            int cnt = arr[i];
            for(int j=i+1; j<n; j++)
            {
                cnt += arr[j];
                if(cnt > n)
                {
                    break;
                }
                else
                {
                    cnt1 += freq[cnt];
                    freq[cnt] = 0;
                }
            }
        }
        cout<<cnt1<<endl;
    }
}
/* stuff you should look for
	* int overflow, array bounds
	* special cases (n=1?)
	* do smth instead of nothing and stay organized
	* WRITE STUFF DOWN
	* DON'T GET STUCK ON ONE APPROACH
*/
