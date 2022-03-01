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
    int n,m;
    cin>>n>>m;
    map<string, string>mp;
    string a, b;
    for(int i=0; i<m; i++)
    {
        cin>>a>>b;
        if(a.size() <= b.size())
        {
            mp[a] = a;
        }
        else
        {
            mp[a] = b;
        }
    }
    while(n--)
    {
        cin>>a;
        cout<<mp[a]<<" ";
    }
}
