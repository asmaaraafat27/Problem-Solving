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
void solve()
{
    int n, res =0;
    cin>>n;
    int arr[n];
    int maxi =100, ma=0;
    int mini =0, mi=0;
    for(int i=0; i<n; i++)
    {
        cin>> arr[i];
        if(arr[i] < maxi)
        {
            maxi = arr[i];
        }
        if(arr[i] > mini)
        {
           mini = arr[i];
        }
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i] == mini)
        {
            ma = i;
            break;
        }
    }
    for(int i =n-1; i>=0; i--)
    {
        if(arr[i] == maxi)
        {
            mi = i;
            break;
        }
    }

    if(ma > mi)
      res = ma + n - mi - 2;
    else
      res = ma + n - mi - 1;

         cout<< res;

}
int main()
{
   fast;
   solve();
}