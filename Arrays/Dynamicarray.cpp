#include<iostream>
using namespace std;
void printArray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    // int arr[5]={1,2,3,4,5};     /*Static Memory allocation*/
    // int n=5;
    int n;
    cout<<"Enter the value of n=";
    cin>>n;
    int *arr=new int[n];
    printArray(arr,n);
}