#include<stdio.h>
#include<iostream>
using namespace std;
bool linearsearch(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return true;
        }
    }
    return false;
}
int main(){
    int arr[7]={10,20,30,40,50,60};
    int n=7;
    int target =10;
    bool ans=linearsearch(arr,n,target);
    if(ans==1){
        cout<<"Target is found";
    }
    else{
        cout<<"Target not found";
    }
}
    // int a=5;
    // int arr[10];
    // cout<<"Addresss of a is= "<<&a<<endl;
    // cout<<"Adress of array is ="<<&arr<<endl;
    // cout<<"Adress of array is ="<<arr<<endl;
    // cout<<"Size of array is ="<<sizeof(arr)<<endl;
    // cout<<"Size of a is="<<sizeof(a)<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<"Enter the array for index "<<i<<" ";
    //     cin>>arr[i];
    // }
    // int target;
    // bool flag=0;
    // cout<<"Enter the value to find=";
    // cin>>target;
    // for(int i=0;i<n;i++){
    //     if(arr[i]==target)
    //     {
    //         flag=1;
    //         break;
    //     }
    // }
    // if(flag==1){
    //     cout<<"TargeT Found "<<endl;
    // }
    // else{
    //     cout<<"Target not found "<<endl;
    // }