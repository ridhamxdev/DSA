#include<stdio.h>
#include<iostream>
using namespace std;
int sum(int n){
    int summ=0;
    // for(int i=0;i<=n;i++){
    //     cout<<i<<" ";
    //     if(i%2==0){
    //         summ+=i;
    //     }
    // }
    
    cout<<endl;
    cout<<"Even Sum is "<<summ;
}
int main(){
    int n;
    cin>>n;
    sum(n);
    return 0;
}