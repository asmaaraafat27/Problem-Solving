#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t,msg;
    cin>>s>>t>>msg;
    s+=t;
    sort(s.begin(),s.end());
    sort(msg.begin(),msg.end());
    if(s==msg)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}