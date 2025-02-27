#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row=0;row<n;row=row+1){
        int totalcol=n-row;
        for(int col=0;col<totalcol;col=col+1){
            if(row==0 || row==n-1){
                cout<<"*";
            }
            else{
                if(col==0 || col== totalcol-1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
}