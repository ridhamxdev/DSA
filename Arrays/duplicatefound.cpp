#include<iostream>
#include<vector>
using namespace std;
bool dupicate(vector<int>v){
    int n=v.size();
    int low=1;
    int high=n-1;
    while(low<=high){
        if(v[low]==v[high])
        return true;
        low++;
        high--;
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return false;
}
int main(){
    vector<int>v={1,2,3,3,4,5,6};
    bool x=dupicate(v);
    if(x){
        cout<<"Duplicate present";
    }
    else{
        cout<<"Duplicate not found";
    }
    return 0;
}