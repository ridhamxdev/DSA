//Leetcode question -Medium
#include<iostream>
#include<vector>
using namespace std;
void rotateArray(vector<int>&v,int k){
    int n=v.size();
    vector<int>ans(n);
    for(int index=0;index<n;index++){
        int newindex=(index+k)%n;
        ans[newindex]=v[index];
    }
    v=ans;
}
void printvector(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    vector<int>v;
    int k;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    printvector(v);
    cout<<"Enter the value of k=";
    cin>>k;
    rotateArray(v,k);
    printvector(v);   
    return 0;
}