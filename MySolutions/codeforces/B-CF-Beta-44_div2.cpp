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
int a[4];
void solve()
{
    string s;
    for(int i=0; i<3; i++)
    {
        cin>>s;
        if(s[1]=='>')
        {
            a[s[0]-'A']++;
        }
        else
        {
            a[s[2]-'A']++;
        }
    }
}
void read()
{
    if(a[0]==a[1]||a[1]==a[2]||a[2]==a[0])
    {
        cout<<"Impossible";
    }
    else
    {
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                 if(i==a[j])
                 {
                     cout<<char('A'+j);
                 }
            }
        }
    }
}
int main()
{
    #ifndef ONLINE_JUDGE
    //freopen("fight.txt", "rt", stdin);
    #endif
    fast;
    solve();
    read();
}
