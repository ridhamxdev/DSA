#include<iostream>
#include<vector>
using namespace std;
void wavprintMat(vector<vector<int>>v){
    int m=v.size();
    int n=v[0].size();
    for(int startcol=0;startcol<n;startcol++){
        if((startcol & 1)==0){
            for(int i=0;i<m;i++){
                cout<<v[i][startcol]<<" ";
            }
        }
        else{
            for(int i=m-1;i>=0;i--){
                cout<<v[i][startcol]<<" ";
            }
        }
    }
}
int main(){
    vector<vector<int>>v{
        {1,2,3,4,5},
        {5,3,1,4,6},
        {4,2,7,4,2},
        {3,8,1,5,7}
    };
    wavprintMat(v);
    cout<<endl;
}