/*\
     Author: Asmaa Raafat.
     --> use stack.
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
    string s, ss="";
    cin>>s;
    stack<char>stk;
    for(int i=0; i<s.size(); i++)
    {
        if(stk.empty() || s[i] != stk.top())
        {
            stk.push(s[i]);
        }
        else
        {
            if(stk.top() == s[i])
            {
               stk.pop();
            }
            else
            {
                stk.push(s[i]);
            }
        }
    }
    while(!stk.empty())
    {
        ss += stk.top();
        stk.pop();
    }
    reverse(ss.begin(),ss.end());
    cout<<ss;
}
