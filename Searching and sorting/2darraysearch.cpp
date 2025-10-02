#include<iostream>
#include<vector>
using namespace std;
bool search(vector<vector<int>>v,int target){
    int row=v.size();
    int col=v[0].size();
    int n=row*col;

    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        int rowIndex=mid/col;
        int colIndex=mid%col;
        int currNumber=v[rowIndex][colIndex];
        if(currNumber==target){
            return true;
        }
        else if(target > currNumber){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return false;
}
int main(){
    vector<vector<int>>v {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
        };
        int target=4;
        bool x=search(v,target);
        if(x){
            cout<<"Found\n";
        }
        else{
            cout<<"Not found";
        }
        return 0;
}