#include <bits/stdc++.h>
using namespace std;
int main()
{
      ios::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
    //freopen("password.in","r",stdin);
    string s;
    int c=0;
    cin>>s;
    int x = s.size();
    for(int i=0;i<s.size();i++)
    {
        if(islower(s[i]))
        {
            c++;
            x--;
        }
    }
    for(int i=0;i<s.size();i++)
    {
        if(c>x || c==x)
         cout<<(char)tolower(s[i]);
        else
         cout<<(char)toupper(s[i]);
    }
}