#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 // freopen("xor.in" , "r", stdin);
    int n,m;
    cin>>n>>m;
    while(n>0)
    {
        char a ='a';
        for(int i=0;i<m;i++)
        {
            cout<<a;
            a++;
            n--;
            if(n==0)
            break;
        }
    }
    cout<<endl;
    return 0;
}