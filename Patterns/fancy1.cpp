#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int c=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(i==0||i==n||j==i){
            cout<<c;
            c++;
            }
            else{
                cout<<c<<"*";
                c++;
            }
        }
        cout<<endl;
    }
    int start=c-n;
        for(int i=0;i<n;i++){
            int k=start;
            for(int j=0;j<=n-i-1;j++){
                if(i==n||j==n-i-1){
                cout<<k;
                k++;
                }
                else{
                    cout<<k<<"*";
                    k++;
                }
            }
            start=start-(n-i-1);
        cout<<endl;
        }
}
