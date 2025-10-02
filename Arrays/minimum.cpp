#include<stdio.h>
#include<iostream>
#include<limits.h>   /*For utility for int max and min*/
using namespace std;
int minimumnumber(int arr[],int size){
    int minans=INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<minans){
            minans=arr[i];
        }
    }
    return minans;
}
int main(){
    int arr[]={1,2,3,2,1,7,-5};
    int size=7;
    int answer=minimumnumber(arr,7);
    cout<<"Minimum number is="<<answer<<endl;
}
    // cout<<"Best Practice";
    // cout<<INT_MIN<<endl;  /*For finding maximum ans*/
    // cout<<INT_MAX<<endl;  /*For finding minimum ans*/