/*
  Idea: First i done the ( k*=2 ) because i wanna reach the maximum number would the 'K' reached but
        also to be less than 'N' then i done the ( k/=2 ) just to get return the value before last multiple
        by two to stopped the while loop,
        in first loop 'reversed' i just cout all the number and stopped when its (K-1) ends with 'zero'
        to minimize the maxi number "XOR theory" then,
        i done another loop to cout the maxi number and so on.
*/
#include <bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define MOD 1000000007
using namespace std;
int main()
{
    ////"THINK TWICE... CODE ONCE"//.
    fast;
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int k =1;
        while( k<n )
        {
            k*=2;
        }
        k/=2;
        for(int i =k-1; i>=0; i--)
        {
                cout<<i <<" ";
        }
        for(int i =k; i<n; i++)
        {
                cout<<i <<" ";
        }
        cout<<endl;
    }
    return 0;
}
