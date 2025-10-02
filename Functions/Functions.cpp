#include<stdio.h>
#include<iostream>
using namespace std;
// int add(int a,int b,int c){
//     int ans=a+b+c;
//     return ans;
// }
// int max(int a,int b,int c){
//     if(a>b&&b>c){
        
//     }
// }
// int count(int n){
//     for(int i=0;i<n;i++){
//         cout<<i<<endl;
//     }
// }
bool prime(int n){
        if(n==0){
            return false;
        }
    for(int i=2;i<=n;i++){
        if(n%i==0){
            return false;
        }
        return true;
    }
    
}
int main(){
    // int s=add(2,4,5);
    // cout<<s<<endl;
    // count(n);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(prime(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}