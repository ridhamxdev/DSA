#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row=0;row<n;row=row+1){
        char ch;
        for(int col=0;col<row+1;col=col+1){
            ch=col+1+'A'-1;
            cout<<ch;
        }
       for(char alpha=ch;alpha>'A';){
        alpha=alpha-1;
        cout<<alpha;
    }
    cout<<endl;
    }
    
}
    // for(int row=0;row<n;row=row+1){
    //     for(int col=0;col<row+1;col=col+1)
    //     {
    //         cout<<col+1;
    //     }
    //     cout<<endl;
    // }