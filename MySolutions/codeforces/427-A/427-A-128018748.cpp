#include <bits/stdc++.h>
using namespace std;
int main()
{
      ios::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
    //freopen("password.in","r",stdin;
    int n,c=0,k=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<0)
            c++;
    }
    for(int i=0;i<n;i++) // -1 -1 1 1 -1 -1 1
    {
        if(arr[i]>0)
        {
            k+=arr[i];
        }
        if(arr[i]<0 && k!=0)
        {
            c--;
            k--;
        }
    }
    cout<<c;
}