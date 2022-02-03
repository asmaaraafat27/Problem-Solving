/*
  Author: Asmaa Raafat.
  Idea: I solved this problem using "Stack" only.
*/
#include <bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define MOD 1000000007
using namespace std;
int main()
{
    ////"THINK TWICE... CODE ONCE"//.
    fast;
    string s;
    cin>>s;
    stack<char>stk;
    for(int i=0; i<s.size(); i++)
    {
        if(stk.empty())
        {
            stk.push(s[i]);
        }
        else
        {
            if(s[i] == stk.top())
            {
                stk.pop();
            }
            else
            {
                stk.push(s[i]);
            }
        }
    }
    if(stk.empty())
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
