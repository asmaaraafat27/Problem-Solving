#include <bits/stdc++.h>
using namespace std;
int main()
{
      ios::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
    //freopen("password.in","r",stdin);
    int l,b,c=0;
    cin>>l>>b;
    while(l<=b)
    {
        l*=3;
        b*=2;
        c++;
    }
    cout<<c;

    return 0;
}