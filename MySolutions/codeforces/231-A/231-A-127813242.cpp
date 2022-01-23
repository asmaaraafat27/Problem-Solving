#include <bits/stdc++.h>
using namespace std;
int main()
{
      ios::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
    //freopen("password.in","r",stdin);
    int n,m=3,c=0,x=0;
    cin>>n;
    int arr[n][3];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
           cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++) // 1 1 1
        {
           if(arr[i][j]== 1 )
            {
                c++;
            }
        }
         if(c>2 || c==2)
         {
            x++;
         }
         c=0;
    }
    cout<<x;

    return 0;
}