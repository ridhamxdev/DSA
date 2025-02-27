#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int binarysearch(vector<int>v,int target){
    int n=v.size();
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(v[mid]==target){
            return mid;
        }
        else if(target>v[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
int main(){
    vector<int>v={1,2,3,4,5,6,7,8};
    int target=8;
    int ans =binarysearch(v,target);
    if(ans==-1){
        cout<<"Element not found";
    }
    else{
        cout<<"Element found at index at "<<ans<<endl;
    }
    // int x=floor(3.5);
    // cout<<x;
    return 0;
}