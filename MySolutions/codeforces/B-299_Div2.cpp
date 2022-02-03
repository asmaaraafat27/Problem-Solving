/*
  Idea:  I solve it using "Recursion".
*/
#include <bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define MOD 1000000007
using namespace std;
ll target, cnt;
void solve(ll st)
{
    if(st >= target)return;
    cnt++;
    solve(st*10+4);
    solve(st*10+7);
}
int main()
{
    ////"THINK TWICE... CODE ONCE"//.
    fast;
    cin>>target;
    solve(0);
    cout<<cnt;
    return 0;
}
