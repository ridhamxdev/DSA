#include<iostream>
#include<vector>
using namespace std;
void printVector(vector<int>v){
    int size=v.size();
    int capacity=v.capacity();
    for(int i=0;i<size;i++){
        // cout<<v[i]<<" ";
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>v={1,2,3,4,5};
    // cout<<"Front element ="<<v[0];
    // cout<<"End Element ="<<v[v.size()-1];
    cout<<"Front element ="<<v.front()<<endl;
    cout<<"End Element ="<<v.back()<<endl;
    cout<<"Printing Vector method=";
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;

    // printVector(v);
    // v.pop_back();
    // v.pop_back();
    // printVector(v);
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);

    // printVector(v);
    // v.pop_back();
    // v.pop_back();
    
    // printVector(v);
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     int d;
    //     cin>>d;
    //     v.push_back(d);
    // }
    // printVector(v);
    // //For clearing the vector
    // // v.clear();
    // printVector(v);
}