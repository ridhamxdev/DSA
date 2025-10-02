#include<iostream>
using namespace std;
int divisor(int divisor,int dividend){
    int s=0;
    int e=dividend;
    int ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(mid*divisor==dividend){
            return mid;
        }
        if(mid*divisor<dividend){
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
    int divisorr=4;
    int dividend=-10;
    int x=divisor(abs(divisorr),abs(dividend));
    if((divisorr<0 && dividend>0)||(divisorr>0 && dividend<0)){
        x=0-x;
    }
    cout<<"Answer is :"<<x<<endl;
}