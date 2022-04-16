/*
   Authar: Asmaa Raafat.
*/
/////////////////////////////"THINK TWICE... CODE ONCE"/////////////////////////////////.
#include <bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve()
{
    string s;
    cin>>s;
    int r = 7, b = 7, g = 7;
    for(int i=0; i<6; i++)
    {
        if(s[i] == 'r')
        {
            r = i;
        }
        if(s[i] == 'g')
        {
            g = i;
        }
        if(s[i] == 'b')
        {
            b = i;
        }
    }
    if(s.find('R')<r)
    {
        cout<<"NO";
        return ;
    }
    else if(s.find('G')<g)
    {
       cout<<"NO";
        return ;
    }
    else if(s.find('B')<b)
    {
        cout<<"NO";
        return ;
    }
    cout<<"YES";
}
int main()
{
    #ifndef ONLINE_JUDGE
    //freopen("fight.txt", "rt", stdin);
    #endif
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<endl;
    }

}
/* stuff you should look for
	* int overflow, array bounds
	* special cases (n=1?)
	* do smth instead of nothing and stay organized
	* WRITE STUFF DOWN
	* DON'T GET STUCK ON ONE APPROACH
*/
