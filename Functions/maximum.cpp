#include<stdio.h>
#include<iostream>
using namespace std;
int max(int a,int b,int c){
    // if(a>b && a>c){
    //     cout<<"A "<<a<<" is Greater";
    // }
    // else if(b>c){
    //     cout<<"B "<<b<<" is greater";
    // }
    // else{
    //     cout<<"C "<<c<<" is greater";
    // }
    // return (a>b&&a>c?a:b>c?b:c);
    int ans1=max(a,b);
    int ans2=max(ans1,c);
    cout<<"Final answer is "<<ans2<<endl;
}
int main(){
    max(10,15,1);
    // cout<<a;
    return 0;
}