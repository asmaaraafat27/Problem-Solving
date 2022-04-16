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
    int s, b;
    cin>>s>>b;
    vector<int>arr;
    for(int i=0; i<s; i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    vector<pair<int, int>> d;
    for(int i=0; i<b; i++)
    {
        int p, pp;
        cin>>p>>pp;
        d.emplace_back(p, pp);
    }
    sort(d.begin(), d.end());
    for(int i=0; i<s; i++)
    {
        int res =0, j =0;
        while(d[j].first <= arr[i] && j < b)
        {
            res += d[j].second;
            j++;
        }
        cout<< res<< " ";
    }
}
/* stuff you should look for
	* int overflow, array bounds
	* special cases (n=1?)
	* do smth instead of nothing and stay organized
	* WRITE STUFF DOWN
	* DON'T GET STUCK ON ONE APPROACH
*/
