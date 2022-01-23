#include <bits/stdc++.h>
using namespace std;
int main()
{
      ios::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
    //freopen("password.in","r",stdin);
      int n,a,b;
      cin>>n;
      int arr[n];
      int arr2[2]={0};
      for(int i=0;i<n;i++)
      {
          cin>>arr[i];
      }
       a=0;b=n-1;
      for(int i=0;i<n;i++)
      {
          if(arr[a]<arr[b])
            arr2[i%2]+=arr[b--];
          else
            arr2[i%2]+=arr[a++];
      }
      cout<<arr2[0]<<" "<<arr2[1];
}