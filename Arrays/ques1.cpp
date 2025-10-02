/* Negative value swap*/
#include<iostream>
using namespace std;
void negativeSwap(int arr[],int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}
void printArray(int arr[],int n){
    cout<<"Printing the Array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={1,-2,-3,2,-5,0,4};
    int n=7;
    negativeSwap(arr,n);
    printArray(arr,n);
    return 0;
}