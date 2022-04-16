/*
   Author: Asmaa Raafat.
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
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        stack<char>st;
        for(int i=0; i<s.size(); i++)
        {
            char c =s[i];
            if(st.empty())
            {
                st.push(c);
            }
            else if(!st.empty() && st.top()== 'A' && c == 'B')
            {
                st.pop();
            }
            else if(!st.empty() && st.top() =='B' && c =='B')
            {
                st.pop();
            }
            else
            {
                st.push(c);
            }
        }
        cout<<st.size()<<endl;
    }
}
/* stuff you should look for
	* int overflow, array bounds
	* special cases (n=1?)
	* do smth instead of nothing and stay organized
	* WRITE STUFF DOWN
	* DON'T GET STUCK ON ONE APPROACH
*/
