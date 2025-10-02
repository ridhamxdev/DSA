/* Pivot element is maximum number in rotated and sorted array*/
#include<iostream>
#include<vector>
using namespace std;
int pivotFind(vector<int> &arr){
    int n=arr.size();
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(s==e){
            return s;
        }
        if(arr[mid+1]<n && arr[mid]>arr[mid+1]){
            return mid;
        }
        else if(arr[mid-1]>=0 && arr[mid-1]>arr[mid]){
            return mid-1;
        }
        else if(arr[s]>arr[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}
int main(){
    vector<int>v={12,14,16,2,4,6,8,10};
    int x=pivotFind(v);
    cout<<x<<endl;
    return 0;
}