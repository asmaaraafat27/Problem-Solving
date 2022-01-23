#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){
 int n,h;
 cin>>n>>h;
  int x=n;
 while(n>=h){
    x=x+(n/h);
  n=(n/h)+(n%h);
 }
 cout<<x<<endl;
}