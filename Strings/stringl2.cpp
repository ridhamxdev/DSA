/*Removing adjacent duplicates in a string*/
#include<iostream>
#include<string.h>
using namespace std;
string duplicates(string s){
    string ans="";
    int index=0;
    while(index<s.length()){
        if(ans.length()>0 && ans[ans.length()-1]==s[index]){
            ans.pop_back();
        }
        else{
            ans.push_back(s[index]);
        }
        index++;
    }
    return ans;
}
int main(){
    string name;
    cout<<"Enter the string:";
    cin>>name;
    string ch=duplicates(name);
    cout<<"Character is:"<<ch<<endl;
    return 0;
}