#include<iostream>
#include<limits.h>
using namespace std;
int maximumElement(int a[][4],int row,int col){
    int max=INT_MIN;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(a[i][j]>max){
                max=a[i][j];
            }
        }
    }
    return max;
}
int main(){
    int arr[4][4]={{1,2,3,4},{2,4,7,11},{22,77,2,0},{8,5,6,82}};
    int row=4;
    int col=4;

    int x=maximumElement(arr,row,col);
    cout<<"Maximum element in the array is ="<<x;
}