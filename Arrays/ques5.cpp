//Leetcode question -Medium
#include<iostream>
#include<vector>
using namespace std;
void printvector(vector<vector<int>>v){
    for(int i=0;i<v.size();i++){
        for(int j=0;i<v[i].size();j++){
        cout<<v[i][j]<<" ";
        }
    }
}
int main(){
    vector<vector<int> >v;
    int k;
    
    printvector(v);   
    return 0;
}