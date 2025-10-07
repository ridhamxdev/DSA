#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    string e;
    cout<<"Enter the characters to find last occurrence: ";
    cin>>e;
    int i=0;
    stringOccurenceRecord(s,e,i,new int[256]);
    return 0;
}