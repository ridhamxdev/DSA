#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>>v;
    vector<int>v1(5,10);
    vector<int>v2(3,10);
    vector<int>v3(6,10);
    vector<int>v4(1,10);
    vector<int>v5(7,10);
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    v.push_back(v4);
    v.push_back(v5);
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}