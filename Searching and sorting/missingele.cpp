#include<iostream>
#include<vector>
using namespace std;
int missingVector(vector<int>a){
    int n=a.size();
    int low=0;
    int high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        int diff=a[mid]-mid;
        if(diff==1){
            low=mid+1;
        }
        else{
            high=mid-1;
            ans=mid;
        }
    }
    if(ans+1==0)
    return n+1;
    return ans+1;
}
int main(){
    vector<int>v={1,2,3,4,6,7,8};
    int x=missingVector(v);
    cout<<x<<endl;
    return 0;
}