#include <bits/stdc++.h>
using namespace std;
int arr[26];
int main()
{
   ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
  /*freopen("password.in" , "r", stdin);*/
  int k,c=0;
  string s;
  cin>>s;
  cin>>k;
  int i = 0;
  for(;i<s.size();i++)
      if(!arr[s[i]]++)
        c++;
      if(i<k)
      cout<<"impossible";
      else
      cout<<(k>c?k-c:0);
    return 0;
}