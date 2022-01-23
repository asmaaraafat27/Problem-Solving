#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll calc(ll a, ll b, ll n)
{
    return ((a+b)*n)/2;
}
ll freq[5];
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  //freopen("password.in",r",stdin);
  int n;
  ll taxi=0;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
      freq[arr[i]]++;
  }
  while(freq[4]>0)
  {
      freq[4]--;
      taxi++;
  }
  while(freq[3]>0)
  {
      if(freq[1]>0)
      {
        freq[3]--;
        freq[1]--;
        taxi++;
      }
      else
      {
          freq[3]--;
          taxi++;
      }
  }
  while(freq[2]>0)
  {
      /*if(freq[2]==1)
      {
          freq[2]--;
          taxi++;
      }*/
      if(freq[1]>0)
      {
          freq[2]--;
          freq[1]-=2;
          taxi++;
      }
      else
      {
          freq[2]-=2;
          taxi++;
      }
  }
  while(freq[1]>0)
  {
      if(freq[1]>3)
      {
          freq[1]-=4;
          taxi++;
      }
      else
      {
          freq[1]=0;
          taxi++;
      }
  }
  cout<<taxi;
}