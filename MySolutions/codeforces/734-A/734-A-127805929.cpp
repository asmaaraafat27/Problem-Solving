#include <bits/stdc++.h>
using namespace std;
int main()
{
      ios::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
    //freopen("password.in","r",stdin);
    int n,d=0,a=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]== 'A')
        {
            a++;
        }
        else if(s[i]=='D')
        {
            d++;
        }
    }
    if(a>d)
        cout<<"Anton";
    else if(d>a)
        cout<<"Danik";
    else if(d==a)
        cout<<"Friendship";

    return 0;
}