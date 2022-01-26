#include <bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    ////"THINK TWICE... CODE ONCE"//.
    fast;
    int cnt=1;
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == s[i+1] && i+1 < s.size())
        {
            s.erase(i,2);
            i= -1;
            cnt++;
        }
    }
    if (cnt & 1)
    {
		cout << "NO\n";
	}
	else
	{
		cout << "YES\n";
	}
}
