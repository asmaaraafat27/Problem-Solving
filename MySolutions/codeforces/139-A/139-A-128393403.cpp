#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  //freopen("password.in","r",stdin;
      int n,p=7,pp=-1,pages=0;
      cin>>n;
      int arr[p];
      for(int i=0;i<p;i++) // 1 1 1 1 1 1 1
      {
          cin>>arr[i];
      }
      for(int j=0;j<n;j++)
      {
          for(int i=0;i<p;i++)
          {
              if(pages<n && arr[i]!=0)
              {
                pages+=arr[i];
                pp=i;
              }
              if(pages>=n)
              {
                 break;
              }
          }
      }
      cout<<pp+1<<endl;
}