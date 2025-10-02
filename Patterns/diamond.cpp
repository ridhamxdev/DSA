#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n,num;
    cout<<"Enter the value of n=";
    cin>>num;
    n=num/2;
    for(int row=0;row<n;row=row+1)
    {
        for(int col=0;col<n-row-1;col=col+1){
            cout<<" ";
        }
        for(int col=0;col<row+1;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
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