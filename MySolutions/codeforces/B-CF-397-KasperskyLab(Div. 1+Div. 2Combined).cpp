/*
   Authar: Asmaa Raafat.
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
    string s, ss;
    cin>>s;
    if(s[0] != 'a')
    {
        cout<<"NO\n";
    }
    else
    {
        ss = "a";
        bool notin = false;
        for(int i=1; i<s.size(); i++)
        {
            if(ss.find(char(s[i]-1)) == string :: npos && s[i] != 'a')
            {
                notin = true;
                break;
            }
            ss += s[i];
        }
        if(notin == true)
          cout<<"NO";
        else
          cout<<"YES";

    }
}
/* stuff you should look for
	* int overflow, array bounds
	* special cases (n=1?)
	* do smth instead of nothing and stay organized
	* WRITE STUFF DOWN
	* DON'T GET STUCK ON ONE APPROACH
*/
