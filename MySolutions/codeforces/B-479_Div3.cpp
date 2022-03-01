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
        int n, cnt=0, mx=0;
    cin>>n;
    string s, st;
    cin>>s;
    for(int i=0; i<n-1; i++)
    {
        string ss;
        ss += s[i];
        ss += s[i+1];
        cnt=0;
        for(int j=0; j<s.size(); j++)
        {
            if(s[j] == ss[0] && s[j+1] == ss[1])
            {
                cnt++;
            }
        }
        if(cnt > mx )
        {
            mx = cnt;
            st = ss;
        }
    }
    cout<<st;
}
