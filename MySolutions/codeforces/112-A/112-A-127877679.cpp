#include <bits/stdc++.h>
using namespace std;
int main()
{
      ios::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
    //freopen("password.in","r",stdin);
      string a,b;
      char aa,bb;
      cin>>a>>b;
      for(int i=0;i<a.size();i++)
      {
           aa = tolower(a[i]);
           bb = tolower(b[i]);
      if(aa>bb)
      {
        cout<<1;
        break;
       }
      else if(aa<bb)
      {
        cout<<-1;
        break;
      }
      else if(aa==bb && i == a.size()-1)
      {
        cout<<0;
        break;
      }
      }
}