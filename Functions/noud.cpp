#include<iostream>
using namespace std;
int number(int numberofdigit){
    int num=0;
    int digit;
    for(int i=0;i<numberofdigit;i++){
        cout<<"Enter digit :"<<endl;
        cin>>digit;
        num=num*10+digit;
        cout<<"Number entered so far: "<<num<<endl;
    }
    return num;
}
int main(){
    int n;
    cout<<"Enter number of digits : ";
    cin>>n;
    int digittonumber=number(n);
    return 0;
}