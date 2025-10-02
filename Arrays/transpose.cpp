#include<iostream>
using namespace std;
void SwapArray(int ar[][4],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=i;j<col;j++){
            swap(ar[i][j],ar[j][i]);   /* Upper Triangle calculate*/
        }
    }
}
void printArray(int ar[][4],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<ar[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int arr[4][4] = {
    {1, 2, 3, 4}, 
    {2, 4, 7, 11},
    {22, 77, 2, 0}, 
    {8, 5, 6, 5}};
    int row = 4;
    int col = 4;
    SwapArray(arr,row,col);
    printArray(arr,row,col);
    return 0;
}