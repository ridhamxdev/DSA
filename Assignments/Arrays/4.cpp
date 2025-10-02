/*Using hashing Finding first duplicate index and value */

#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
int firstduplicate(vector<int>v){
    int n=v.size();
    unordered_map<int,int>hash;
    for(int i=0;i<n;i++){
        hash[v[i]]++;
    }
    for(int i=0;i<n;i++){
        if(hash[v[i]]>1){
            return i+1;
        }
    }
    return -1;
}
int main(){
    vector<int>v={1,2,4,5,3,4};
    int x=firstduplicate(v);
    cout<<"First repeating index is:"<<x<<endl;
}