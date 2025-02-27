#include<stdio.h>
#include<iostream>
using namespace std;
int sum(int n){
    int summ=0;
    for(int i=0;i<n;i++){
        summ+=i;
    }
    cout<<summ;
}
int main(){
    int n;
    cin>>n;
    sum(n);
    return 0;
}