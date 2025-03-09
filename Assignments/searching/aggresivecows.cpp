#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isPossibleSol(vector<int>&v,int k,int sol){
    int c=1;
    int pos=v[0];
    for(int i=1;i<v.size();i++){
        if(v[i]-pos>=sol)
        c++;
        pos=v[i];
        if(c==k)
        return true;
    }
    return false;
}
int aggresivecows(vector<int>&v,int k){
    sort(v.begin(),v.end());
    int start=0;
    int end=v[v.size()-1]-v[0];
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2; 
        if(isPossibleSol(v,k,mid)){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}
int main(){
    vector<int>v={10,1,2,7,5};
    int k=3;
    int x=aggresivecows(v,k);
    cout<<x<<endl;
    return 0;
}