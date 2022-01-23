#include <bits/stdc++.h>
using namespace std;
int main()
{
      ios::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
    //freopen("password.in","r",stdin);
      string s;
      cin>>s;
      int c = s.size();
      for(int i=0;i<s.size();i++)
      {
          for(int j=i+1;j<s.size();j++)
          {
              if(s[i]==s[j])
              {
                  c--;
                  break;
              }
          }
      }
      if(c%2==0)
        cout<<"CHAT WITH HER!";
      else
        cout<<"IGNORE HIM!";
    return 0;
}