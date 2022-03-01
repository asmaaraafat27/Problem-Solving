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
    unordered_set<string>st;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        ss.push_back(s);
    }
    for(int i=n-1; i>=0; i--)
    {
        if(st.find(ss[i]) != st.end())
        {
            continue;
        }
        st.insert(ss[i]);
        cout<<ss[i]<<endl;
    }
}
