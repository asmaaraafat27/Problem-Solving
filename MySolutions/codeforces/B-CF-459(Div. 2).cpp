/*
   Authar: Asmaa Raafat.
*/
/////////////////////////////"THINK TWICE... CODE ONCE"/////////////////////////////////.
#include <bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    //freopen("fight.txt", "rt", stdin);
    #endif
    fast;
    ll n,m,i;
     string s,f,t;
     cin>>n>>m;
     map<string,string> mp;
     while(n--)
     {
          cin>>s;
          cin>>t;
          mp[t] = s;
     }
     while(m--){
          cin>>f;
          cin>>t;
          t.pop_back();
          cout<<f<<" "<<t<<"; #"<<mp[t]<<endl;
     }

}
/* stuff you should look for
	* int overflow, array bounds
	* special cases (n=1?)
	* do smth instead of nothing and stay organized
	* WRITE STUFF DOWN
	* DON'T GET STUCK ON ONE APPROACH
*/
