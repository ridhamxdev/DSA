#include<stdio.h>
#include<iostream>
using namespace std;
void check(int n){
    if(/*n%2==0*/ (n&1)==0){
        cout<<"Number"<<n<<"is Even"<<endl;
    }
    else{
        cout<<"Number"<<n<<"is Odd"<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    check(n);
}