#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int arr[7]={1,0,1,0,2,1,0};
    int size=7;
    int zerocount=0;
    int onecount=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            zerocount++;
        }
        if(arr[i]==1){
            onecount++;
        }
    }
    cout<<"Number of ones="<<onecount<<endl;
    cout<<"Number of zeoes="<<zerocount<<endl;
    return 0;
}