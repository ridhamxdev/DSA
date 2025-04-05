#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string a="Love";
    string b="Babbar";
    cout<<"Before appending :"<<endl;
    cout<<"String 1:"<<a<<endl;
    cout<<"String 2:"<<b<<endl;
    a.append(b);
    cout<<"After appending :"<<endl;
    cout<<"String 1:"<<a<<endl;
    cout<<"String 2:"<<b<<endl;



    


    // a.erase(2, 3);
    // cout<<a<<endl;
    // string c="veb";
    // a.insert(2,c);
    // cout<<a<<endl;
    // string a1="My name is Ridham";
    // string a2="Name";
    // if(a1.find(a2)==string::npos){
    //     cout<<"Not Found";
    // }
    // else{
    //     cout<<"Found";
    // }
    // string a1="Abs";
    // string a2="Abs";
    // if(a1.compare(a2)==0){
    //     cout<<"Matching"<<endl;
    // }
    // else{
    //     cout<<"Not Matching"<<endl;
    // }


    // string name;
    // cout<<"Enter name:";
    // getline(cin,name);
    // cout<<"Entered name is:"<<name<<endl;
    // int index=0;
    // while(name[index]!='\0'){
    //     cout<<"Index is="<<index<<" and Character is "<<name[index]<<endl;
    //     index++;
    // }
    // cout<<"6th index is="<<name[6]<<endl;
    // int null=(int)name[6];
    // cout<<"Null value="<<null<<endl;
    return 0;
}