/*Please if you won't accept my solution,
  you should respect my effort*/
#include <bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
ll calc(ll a, ll b, ll n)
{
    return ((a+b)*n)/2;
}
int main()
{
  fast;
  int n, t, cnt1=0, cnt2=0;
  cin>>n>>t;
  int x;
  for(int i=0;i<n;i++)
  {
      cin>>x;
      if(x==1)
        cnt1++;
      else
        cnt2++;
  }
  while(t--)
  {
      int l,r;
      cin>>l>>r;
      int k = r-l+1;
      if(k%2==1)
      cout<<0<<endl;
      else
      {
        if(cnt1>=k/2 && cnt2>=k/2)
            cout<<1<<endl;
        else
            cout<<0<<endl;
      }
  }
  return 0;
}