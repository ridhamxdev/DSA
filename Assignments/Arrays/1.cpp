#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
bool valueKeypair(int arr[],int x,int n){
    // cout<<"This Function determines the key pair values\n";
    int low=0;
    int high=n-1;
    while(low<high){
        int csum =arr[low]+arr[high];
        if(csum==x){
            return true;
        }
        else if(csum<x){
            low++;
        }
        else{
            high--;
        }
    }
    return false;
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(arr[i]+arr[j]==x){
    //             return true;
    //         }
    //     }
    // }
    // return false;
}
int main(){
    int arr[]={1,3,6,2,9,3};
    int n=6;
    int x;
    cout<<"Enter the value of x=";
    cin>>x;
    sort(arr,arr+n);
    bool x1=valueKeypair(arr,x,n);
    if(x1){
        cout<<"Key Value pair is there\n";
    }
    else{
        cout<<"Not found\n";
    }
    return 0;
}