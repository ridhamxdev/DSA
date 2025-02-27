#include<iostream>
using namespace std;
void rowsum(int arr[][4],int row,int col){
    int sum=0;
    int sumofall=0;
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
            sumofall+=arr[i][j];
        }
        cout<<"Sum of Row wise is :"<<sum<<"\n";
    }
    cout<<"Sum of all elements is ="<<sumofall<<"\n";
}
void colsum(int arr[][4],int row,int col){
    for(int i=0;i<col;i++){
        int sum=0;
        for(int j=0;j<row;j++){
            sum+=arr[j][i];
        }
        cout<<"Sum of Column wise is :"<<sum<<"\n";
    }
}
int main(){
    int arr[4][4]={{1,2,3,4},{32,5,2,1},{2,4,6,1},{34,67,1,34}};
    int row=4;
    int col=4;
    rowsum(arr,row,col);
    colsum(arr,row,col);
}