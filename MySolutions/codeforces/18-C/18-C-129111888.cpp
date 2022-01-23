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
  if(cum[n]%2!=0)
  {
      cout<<0;
      return 0;
  }
  for(int i=1;i<n;i++)// cut after i
  {
     if(cum[i]==cum[n]/2) // 1 2 3 4, cum= 1 3 6 10    1 == 10/2=5
        sum++;
  }
  cout<<sum; //0
}