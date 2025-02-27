#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n=";
    cin>>n;
    for(int row=0;row<n;row=row+1){
        for(int col=0;col<row;col=col+1){
            cout<<" ";
        }
        for(int col=0;col<n-row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}