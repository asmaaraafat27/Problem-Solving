#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  //freopen("password.in","r",stdin;
   int n,sum=0;
  cin>>n;
  int arr[n],cum[n]={0};
  for(int i=1;i<=n;i++)
  {
      cin>>arr[i];
      cum[i]=cum[i-1]+arr[i];
  }
  for(int i=1;i<n;i++)
  {
      if(cum[i]==cum[n]-cum[i])
      {
          sum++;
      }
  }
  cout<<sum;
}