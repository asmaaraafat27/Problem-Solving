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
    string s;
    vector<string>ss;
    ll cnt =0;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        ss.push_back(s);
    }
    for(int i=0; i<n; i++)
    {
        if(ss[i] == "Tetrahedron")
        {
            cnt += 4;
        }
        else if(ss[i] == "Cube")
        {
            cnt += 6;
        }
        else if(ss[i] == "Octahedron")
        {
            cnt += 8;
        }
        else if(ss[i] == "Dodecahedron")
        {
            cnt += 12;
        }
        else if(ss[i] == "Icosahedron")
        {
            cnt += 20;
        }
    }
    cout<<cnt;
}
