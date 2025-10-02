#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
bool isPossibleSol(vector<int>v,int N,int M,int sol){
    int c=1;
    int timeSum=0;
    for(int i=0;i<N;i++)
    {
        if(v[i]>sol){
            return false;
        }
        if(timeSum+v[i]>sol){
            c++;
            timeSum=v[i];
            if(c>M){
                return false;
            }
        }
        else{
            timeSum+=v[i];
        }
    }
    return true;
}
int FindPages(vector<int>v,int N,int M){
    int start=0;
    int ans=-1;
    int end=accumulate(v.begin(),v.end(),0);
    while(start<=end){
        int mid=start+(end-start)/2;
        if(isPossibleSol(v,N,M,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans;
}
int main(){
    vector<int>v={12,34,67,90};
    int N=4;
    int M=2;
    int x=FindPages(v,N,M);
    cout<<"No of pages allocated :"<<x<<endl;
    return 0;
}