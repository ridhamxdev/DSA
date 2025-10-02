#include<iostream>
#include<vector>
using namespace std;
int firstOccurence(vector<int>v,int target){
    int n=v.size();
    int found=-1;
    int low=0;
    int high=n-1;
    while(low<=high){
        // int mid=(low+high)/2;
        int mid=low+(high-low)/2;
        if(v[mid]==target){
            high=mid-1;
            found=mid;
        }
        else if(target>v[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return found;
}
int lastOccurence(vector<int>v,int target){
    int  n=v.size();
    int found=-1;
    int low=0;
    int high=n-1;
    while(low<=high){
        // int mid=(low+high)/2;
        int mid=low+(high-low)/2;
        if(v[mid]==target){
            found=mid;
            low=mid+1;
        }
        else if(target>v[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return found;
}
int TotalOccurence(vector<int>v,int target){
    int firstocc=firstOccurence(v,target);
    int lastocc=lastOccurence(v,target);
    int totalocc=lastocc-firstocc+1;
    return totalocc;
}
int main(){
    vector<int>v={20,30,30,30,30,40,50};
    int target=30;
    int x=firstOccurence(v,target);
    int y=lastOccurence(v,target);
    int z=TotalOccurence(v,target);
    cout<<"First occured element is :"<<x<<endl;
    cout<<"Last occured element is :"<<y<<endl;
    cout<<"Total occured element is :"<<z<<endl;
    return 0;
}