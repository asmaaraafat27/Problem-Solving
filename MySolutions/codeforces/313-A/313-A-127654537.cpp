#include <bits/stdc++.h>
using namespace std;
int main()
{
      ios::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
    //freopen("password.in","r",stdin);
     int n,x;
     cin>>n;
     x = max(n/10,(n/100)*10+n%10); // -10 -->  -1 , 0*10+10%10= 0
     cout<<max(n,x)<<endl;;

    return 0;
}