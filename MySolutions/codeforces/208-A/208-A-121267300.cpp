#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
 string a;
 cin>>a;
 for(int i=0;i<a.size();i++){
    if(a[i]=='W'&&a[i+1]=='U'&&a[i+2]=='B'){
        a.replace(i,3," ");
    }
 }
 cout<<a<<endl;
}