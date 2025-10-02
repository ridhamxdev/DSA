#include<iostream>
using namespace std;
int squareRoot(int n){
    int s=0;
    int e=n;
    int ans=-1;
    while(s<=e){
        long long int mid=s+(e-s)/2;
        if(mid*mid == n){
            return mid;
        }
        else if(mid*mid < n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int x=squareRoot(n);
    cout<<x<<endl;
    return 0;
}