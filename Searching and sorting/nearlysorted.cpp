#include<iostream>
#include<vector>
using namespace std;
int nearlysorted(vector<int> &v,int target){
    int n=v.size();
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(mid-1>=0 && v[mid-1]==target)
        return mid-1;
        if(v[mid]==target)
        return mid;
        if(mid+1 < n && v[mid+1]==target)
        return mid+1;
        if(target>v[mid]){
            s=mid+2;
        }
        else{
            e=mid-2;
        }
    }
    return -1;
}
int main(){
    vector<int>v={20,10,30,50,40,70,60};
    int target=20;
    int x=nearlysorted(v,target);
    if(x==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element found at index: "<<x<<endl;
    }
    return 0;
}