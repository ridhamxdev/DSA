#include<iostream>
#include<string.h>
using namespace std;
string removeOcc(string s,string part){
    while(s.find(part)!=string::npos){
        s.erase(s.find(part),part.length());
    }
    return s;
}
int main(){
    string s;
    cout<<"Enter String:";
    cin>>s;
    cout<<"Enter part Value";
    string part;
    cin>>part;
    string a=removeOcc(s,part);
    cout<<a<<endl;
    return 0;
}