#include<iostream>
#include<vector>
using namespace std;
int findpivotindex(vector<int>v){
    int n=v.size();
    vector<int>lsum(n,0);
    vector<int>rsum(n,0);
    for(int i=1;i<n;i++){
        lsum[i]=lsum[i-1]+v[i-1];
    }
    for(int i=n-2;i>=0;i--){
        rsum[i]=rsum[i+1]+v[i+1];
    }
    for(int i=0;i<n;i++){
        if(lsum[i]==rsum[i])
        return i;
    }
    return -1;
}
void printVector(vector<int>v){
    int n=v.size();
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}
int main(){
    vector<int>v={1,2,3};
    printVector(v);
    int x=findpivotindex(v);
    cout<<"\nPivot index is="<<x;
}