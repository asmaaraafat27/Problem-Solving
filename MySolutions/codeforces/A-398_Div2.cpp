/*\
     Author: Asmaa Raafat
*/
/////////////////////////////"THINK TWICE... CODE ONCE"/////////////////////////////////.
#include <bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
/*bool cmp(pair<int, string>x, pair<int, string>y)
{
    return (x.first > y.first || (x.first == y.first && x.first < y.second);
} */
int main()
{
    #ifndef ONLINE_JUDGE
    //freopen("fight.txt", "rt", stdin);
    #endif
    fast;
    int n,c;
    cin>>n;
    int top=n;
    while(n--)
    {
        cin>>c;
        arr[c] = 1;
        if(top == c)
        {
            for(int i=top; i>0; i--)
            {
                if(arr[i] == 1)
                {
                    cout<< i<< " ";
                    top = i-1;
                    arr[i] = 0;
                }
                else
                {
                    break;
                }
            }
        }
        cout<<endl;
    }
}
