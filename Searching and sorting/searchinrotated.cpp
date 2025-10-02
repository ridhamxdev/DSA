/* Searching in rotated and sorted array */
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
int binarysearch(vector<int>v,int s,int e ,int target){
    while(s<=e){
        int mid=s+(e-s)/2;
        if(v[mid]==target){
            return mid;
        }
        else if(target>v[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return -1;
}
int search(vector<int>& nums,int target){
    int index=pivotFind(nums);
    int n=nums.size();
    int ans=-1;
    if(target>=nums[0]&& target<=nums[index]){
        ans=binarysearch(nums,0,index,target);
    }
    else{
        ans=binarysearch(nums,index+1,n-1,target);
    }
    return ans;
}
int main(){
    vector<int>v={12,14,16,2,4,6,8,10};
    // vector<int>v1={1,3}; /*Important test case */
    int target=3;
    int x=search(v,target);
    cout<<x<<endl;
    return 0;
}