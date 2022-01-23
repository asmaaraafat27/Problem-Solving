#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
int n,p,q,arr[200];
cin>>n>>p;
for(int i=0;i<p;i++){
    cin>>arr[i];
}
cin>>q;
for(int i=p;i<q+p;i++){
    cin>>arr[i];
}
sort(arr,arr+(q+p));
 int c=0;
for(int i=0;i<q+p;i++){
    if(arr[i]!=arr[i+1]){
        c++;
    }
}
    if(c==n)
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;
}