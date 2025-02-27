#include<stdio.h>
#include<iostream>
using namespace std;
void reversalarray(int arr[],int size){
    int left=0;
    int right=size-1;
    while(left<=right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[7]={10,20,30,40,50,60,70};
    int size=7;
    reversalarray(arr,size);
}