#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    // for(int row=0;row<n;row=row+1){
    //     int totalcol=row+1;
    //     for(int col=0;col<totalcol;col=col+1){
    //         if(col==totalcol-1)
    //         {
    //             cout<<row+1;
    //         }
    //         else{
    //             cout<<row+1<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }
    for(int row=0;row<n;row=row+1){
        for(int col=0;col<((2*row)+1);col=col+1){
            if(col%2==1){
                cout<<"*";
            }
            else{
                cout<<row+1;
            }
        }
        cout<<endl;
    }
    for(int row=1;row<n;row=row+1){
        int totalcol=n-row;
        for(int col=0;col<totalcol;col=col+1){
            if(col==totalcol-1){
                cout<<n-row;
            }
            else{
                cout<<n-row<<"*";
            }
        }
        cout<<endl;
    }
}