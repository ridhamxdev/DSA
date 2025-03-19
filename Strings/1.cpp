//For emitting spaces in string we use delimiter tools-> \n,\t,enter,space
// cin.getline(ch,99);
//Length of string 
//char ch[100];
//cin>>ch;->babbar
// null character='\0'
#include<iostream>
#include<string.h>
using namespace std;
// int findLen(char ch[],int size){
//     int length=0;
//     for(int i=0;i<size;i++){
//         if(ch[i]=='\0'){
//             break;
//         }
//         else{
//             length++;
//         }
//     }
//     return length;
// }
int findLen(char ch[],int size){
    // int length=0;
    int index=0;
    while(ch[index]!='\0'){
        // length++;
        index++;
    }
    return index;
}
int main(){
    char ch[100];
    cin.getline(ch,100);
    int len=findLen(ch,100);
    // cout<<"Printing Length:"<<strlen(ch)<<endl;
    cout<<len;
}