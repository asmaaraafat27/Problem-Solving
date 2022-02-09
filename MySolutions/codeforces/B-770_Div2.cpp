/*
   author: Asmaa Raafat.
   idea: I cin array elements then I put all elements that accept mod by 2 in var, the i checked if
         this var is even and if (x%2 == y%2) this should cout "Alice" because it's given that if it Alice
         the d would equal x, else it would be "Bob" because it,s given that if it Bob the d would equal x+3
         and that's means if d is odd the final res will be even and vice versa because we add 3 to x,
         else 'if the var is odd' and if (x%2 != y%2) this should cout "Alice" for the same reason i told it before.
            thats All :)
*/

#include <bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    ////"THINK TWICE... CODE ONCE"//.
    #ifndef ONLINE_JUDGE
    //freopen("fight.txt", "rt", stdin);
    #endif
    fast;
    //solve();
    int t;
    cin>>t;
    ll n,x,y;
    while(t--)
    {
        ll cnt =0, cntt=0;
        cin>>n>>x>>y;
        ll arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(int i=0; i<n; i++)
        {
            cnt +=(arr[i]%2);
        }
        if(cnt%2 == 0)
        {
            if(x%2 == y%2)
            {
                cout<<"Alice"<<endl;
            }
            else
            {
                cout<<"Bob"<<endl;
            }
        }
        else
        {
            if(x%2 != y%2)
            {
                cout<<"Alice"<<endl;
            }
            else
            {
                cout<<"Bob"<<endl;
            }
        }
    }
}
