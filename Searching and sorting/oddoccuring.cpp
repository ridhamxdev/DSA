#include<iostream>
#include<vector>
using namespace std;
int findOccuring(vector<int>v){
    int n=v.size();
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(s==e)
        return s;
        if(mid&1){                  /*mid&1 true -> odd*/
            if(mid-1>=0 && v[mid-1]==v[mid]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        else{
            if(mid+1 < n && v[mid]==v[mid+1]){
                s=mid+2;
            }
            else{
                e=mid;
            }
        }
    }
    return -1;
}
int main(){
    vector<int>v={20,20,30,30,50,30,30,10,10};
    int ans=findOccuring(v);
    cout<<"Answer is :"<<ans<<endl;
    return 0;
}