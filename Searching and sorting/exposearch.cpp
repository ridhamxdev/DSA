#include<iostream>
#include<vector>
using namespace std;
int bs(vector<int>v,int start,int end,int x){
    while(start<=end){
        int mid=start+(end-start)/2;
        if(v[mid]==x)
        return mid;
        else if(x>v[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
}
int exponentioalsearch(vector<int>v ,int k){
    if(v[0]==k)
    return v[0];
    int n=v.size();
    int i=1;
    while(i<n && v[i]<=k){
        i=i*2;
    }
    return bs(v,i/2,min(i,n-1),k);
}
int main(){
    vector<int>v={1,2,3,4,5,6,7,8,9};
    int k=8;
    int x=exponentioalsearch(v,k);
    cout<<x<<endl;
    return 0;
}