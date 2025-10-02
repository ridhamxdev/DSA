#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=1;
    for(int row=0;row<n;row=row+1){
        for(int col=0;col<row;col=col+1){
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
}