#include<iostream>
using namespace std;
void convertUpper(char ch[],int n){
    int i=0;
    while(ch[i]!='\0'){
        char currch=ch[i];
        if(currch>='a' && currch<='z'){
            ch[i]=currch-'a'+'A';
        }
        i++;
    }
}
void altering(char ch[],int n){
    int i=0;
    while(ch[i]!='\0'){
        int curr=ch[i];
        if(curr=='@'){
            ch[i]=' ';
        }
        i++;
    }
}
int main(){
    char ch[100];
    cin.getline(ch,100);
    // cout<<"Before Converting to Upper:"<<ch<<endl;
    // convertUpper(ch,100);
    // cout<<"After Converting to Upper:"<<ch<<endl;
    // cin>>ch;
    cout<<"Before removing @:"<<ch<<endl;
    altering(ch,100);
    cout<<"After removing @:"<<ch<<endl;
    return 0;
}