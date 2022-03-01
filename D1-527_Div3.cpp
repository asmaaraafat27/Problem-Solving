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
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        arr[i] &= 1;
    }
    vector<int>vec;
    for(int i=0; i<n; i++)
    {
        if(!vec.empty() && arr[i] == vec.back())
        {
            vec.pop_back();

        }
        else
        {
            vec.push_back(arr[i]);
        }
    }
    if(vec.size() <=1 )
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
