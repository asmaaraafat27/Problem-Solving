#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='h' && c==0)
        {
            c++;
        }
        else if(s[i]=='e' && c==1)
        {
            c++;
        }
        else if(s[i]=='l' && c==2)
        {
            c++;
        }
          else if(s[i]=='l' && c==3)
        {
            c++;
        }
          else if(s[i]=='o' && c==4)
        {
            c++;
        }
    }
    if(c==5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}