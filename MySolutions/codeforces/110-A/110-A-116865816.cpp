#include <iostream>
#include<string.h>
#include<string>
using namespace std;
int main(){
 int c=0;
 char a[1000];
 cin>>a;
    for(int i=0;i<strlen(a);i++){
        if(a[i]=='7'|| a[i]=='4'){
            c++;}
    }
     if(c==7 || c==4){
    cout<<"YES"<<endl;
 }
 else{cout<<"NO"<<endl;}
}