#include<iostream>
using namespace std;
void printArray(int ar[][4],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<ar[i][j]<<" ";
        }
        cout<<endl;
    }
}
void inputArray(int a[][4],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"Enter input for row index "<<i<<" Enter input for column index "<<j<<" ";
            cin>>a[i][j];
        }
    }
}
int main(){
    int arr[3][4];
    // It is necessary to give column value because it is stored as linearly as c*i+j
    int row=2;
    int col=4;
    inputArray(arr,row,col);
    printArray(arr,row,col);
    return 0;
}