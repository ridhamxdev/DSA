/* Array transpose+ reverse*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void transpose(vector<vector<int>>v){
    for(int i=0;i<v.size();i++){
        for (int j=i;j<v[i].size();j++){
            swap(v[i][j],v[j][i]);
        }
    }
    for(int i=0;i<v.size();i++){
        reverse(v[i].begin(),v[i].end());
    }
    cout<<"Printing after Rotation"<<endl;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
void printVector(vector<vector<int>>v){
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    vector<vector<int>>v
        = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
        printVector(v);
        transpose(v);
        
}