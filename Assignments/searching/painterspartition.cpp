#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
bool isPossibleSol(vector<int>v,int N,int M,long long sol){
    int c=1;
    long long timeSum=0;
    for(int i=0;i<N;i++)
    {
        if(v[i]>sol) return false;
        if(timeSum+v[i]>sol){
            c++;
            timeSum=v[i];
            if(c>M) return false;
        }
        else{
            timeSum+=v[i];
        }
    }
    return true;
}
long long FindPages(vector<int>v,long long N,long long M){
    long long start=0;
    long long ans=-1;
    int end=accumulate(v.begin(),v.end(),0);
    while(start<=end){
        long long mid=start+(end-start)/2;
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
    vector<int>v={5,10,30,20,15};
    long long N=5;
    long long k=3;
    long long x=FindPages(v,N,k);
    cout<<"Painters allocated :"<<x<<endl;
    return 0;
}