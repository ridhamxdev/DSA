#include<iostream>
#include<vector>
using namespace std;
int dupicate(vector<int>v){
    while(v[0]!=v[v[0]]){
        swap(v[0],v[v[0]]);
    }
    return v[0];
}
int main(){
    vector<int>v={1,2,3,4,5,5,6};
    int x=dupicate(v);
    cout<<x<<"\n";
    return 0;
}