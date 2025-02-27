//Leetcode question - Easy
#include<iostream>
#include<vector>
using namespace std;
int missing(vector<int>v){
    int sum=0;
    int n=v.size();
    for(int index=0;index<n;index++){
        sum=sum+v[index];
    }
    int totalsum=(n*(n+1))/2;
    int ans=totalsum-sum;
    return ans;
}
int main(){
    vector<int>v;
    v.push_back(3);
    v.push_back(0);
    v.push_back(1);
    int x=missing(v);
    cout<<"Missing number is "<<x;
    return 0;
}