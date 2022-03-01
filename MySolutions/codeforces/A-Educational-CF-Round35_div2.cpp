/*\
     Author: Asmaa Raafat
*/
/////////////////////////////"THINK TWICE... CODE ONCE"/////////////////////////////////.
#include <bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
/*bool cmp(pair<int, string>x, pair<int, string>y)
{
    return (x.first > y.first || (x.first == y.first && x.first < y.second);
} */
int main()
{
    #ifndef ONLINE_JUDGE
    //freopen("fight.txt", "rt", stdin);
    #endif
    fast;
    int n;
    cin>>n;
    ll arr[n], b[n];
    ll m = INT_MAX, in =0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(m > arr[i])
        {
            m = arr[i];
        }
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i] == m)
        {
            b[in] = i;
            in++;
        }
    }
    m = INT_MAX;
    for(int i=1; i<in; i++)
    {
       m = min(m, b[i]-b[i-1]);
    }
    cout<<m;
}
