#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,q;
    cin>>n>>q;
    int a[n];
    int cnt_a=0;
    int cnt_b=0;

    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1) cnt_a++;
        else
        cnt_b++;
        }
        //int mn=min(cnt_a,cnt_b);
        while(q--){
            int a,b;
            cin>>a>>b;
            int k = b-a+1;
            if(a==b)
            cout<<0<<endl;
           else if(k%2!=0)
            {
                cout<<0<<endl;
            }
            else if(k%2==0)
            {
                if( k<=cnt_a*2 && k<=cnt_b*2)
                cout<<1<<endl;
                else
                cout<<0<<endl;
            }

        }

    return 0;
}