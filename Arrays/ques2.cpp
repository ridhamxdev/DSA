//Leetcode question - Medium
#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int>&v){
    int left=0;
    int right=v.size()-1;
    // int index=0;
    // while(index<=right){
    //     if(arr[index]==0){
    //         swap(arr[index],arr[left]);
    //         left++;
    //         index++;
    //     }
    //     else if(arr[index]==2){
    //         swap(arr[index],arr[right]);
    //         right--;
    //     }
    //     else{
    //         index++;
    //     }
    // }
    for(int i=0;i<=right;i++){
        if(v[i]==0){
            swap(v[i],v[left]);
            left++;
        }
        else if(v[i]==2){
            swap(v[i],v[right]);
            right--;
        }
        else{
            continue;
        }
    }
}
void print(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    vector<int>v={0,2,1,2,0,1,2};
    sort(v);
    print(v);
    return 0;
}