/*
  Idea: i just realized that any string the size is greater than one,
         it will be palindrome.
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
    int t;
    cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        if(n == 1)
        {
            cout<<"YES"<<endl;
        }
        else if(n == 2)
        {
            if(s[0] != s[1])
            {
               cout<<"YES"<<endl;
            }
            else
            {
              cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
