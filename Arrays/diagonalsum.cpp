#include <iostream>
using namespace std;
void diagonalsum(int arr[][4], int row, int col)
{
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        sum += arr[i][i];
        cout<<arr[i][i]<<" ";
    }
    cout << "Sum of Row wise is :" << sum << "\n";
}
void reversediagonal(int arr[][4],int row,int col){
    for(int i=0;i<row;i++){
        
        for(int j=0;j<col;j++){
            
            if(arr[i+1]==arr[col-j]){
                
                cout<<arr[i][j]<<" ";
            }
        }
        
    }
}
int main()
{
    int arr[4][4] = {
    {1, 2, 3, 4}, 
    {2, 4, 7, 11},
    {22, 77, 2, 0}, 
    {8, 5, 6, 5}};
    int row = 4;
    int col = 4;
    diagonalsum(arr, row, col);
    reversediagonal(arr,row,col);
}