#include <bits/stdc++.h>
using namespace std;
int main()
{
      ios::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
    //freopen("password.in","r",stdin);
    int n,x=0,a,b,c;
    cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a>>b>>c;
            if(a+b+c>=2)
               x++;
        }
    cout<<x;
    return 0;
}