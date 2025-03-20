#include<iostream>
#include<string.h>
using namespace std;
bool checkPalindrome(char ch[],int len){
    len=strlen(ch);
    int i=0;
    int j=len-1;
    while(i<=j){
        if(ch[i]==ch[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}
int main(){
    char ch[100];
    cout<<"Enter the string:";
    cin>>ch;
    bool isPalindrome=checkPalindrome(ch,100);
    if(isPalindrome){
        cout<<"Valid Palindrome";
    }
    else{
        cout<<"Invalid Palindrome";
    }
    return 0;
}