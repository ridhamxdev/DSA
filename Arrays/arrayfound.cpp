#include<iostream>
using namespace std;
bool printArray(int arr[][4],int row,int col,int target){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
                if(arr[i][j]==target)
                return true;
        }
    }
    return false;
}
int main(){
    int arr[4][4]={{1,2,3,4},{5,6,7,8},{22,11,44,55},{12,12,34,56}};
    int row=4,col=4;
    int target=55;
    bool x=printArray(arr,row,col,target);
    if(x){
        cout<<"Element found\n";
    
    }
    else{
        cout<<"Element not found\n";
    }
    return 0;
}