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
    string s;
    cin>>s;
    stack<char>stk;
    int cnt=0;
        for(int i=0; i<s.size(); i++)
        {
            char c = s[i];
            if(stk.empty())
            {
                stk.push(c);
                continue;
            }
            if(stk.top()=='(' && c==')')
            {
                stk.pop();
                cnt++;
            }
            else
               stk.push(c);
        }
    cout<<cnt*2;
}
/* stuff you should look for
	* int overflow, array bounds
	* special cases (n=1?)
	* do smth instead of nothing and stay organized
	* WRITE STUFF DOWN
	* DON'T GET STUCK ON ONE APPROACH
*/
