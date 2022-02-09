/*
   author: Asmaa Raafat.
*/

#include <bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    ////"THINK TWICE... CODE ONCE"//.
    #ifndef ONLINE_JUDGE
    //freopen("fight.txt", "rt", stdin);
    #endif
    fast;
    //solve();
    int n;
    cin>>n;
    int arr[n];
    int arr2[n-1];
    int arr3[n-2];
    ll cnt1=0;
    ll cnt2=0;
    ll cnt3=0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        cnt1 += arr[i];
    }
    for(int i=0; i<n-1; i++)
    {
        cin>>arr2[i];
        cnt2 += arr2[i];
    }
    for(int i=0; i<n-2; i++)
    {
        cin>>arr3[i];
        cnt3 += arr3[i];
    }
    cout<<cnt1-cnt2<<endl<<cnt2-cnt3;

}
