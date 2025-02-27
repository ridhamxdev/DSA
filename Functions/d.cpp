#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int a=5;
    int b=10;
    //++a  First increment then use pre Increment 
    //a++  First use then increment Post increment
    //--a  First decrement then use 
    //a--  First use then decrement
    //(>> -1) Gives garbage values
    // cout<<(++a)<<endl;
    cout<<(a++)<<endl;
    // cout<<(b--)*10<<endl;
    cout<<(--b)*10<<endl;
}