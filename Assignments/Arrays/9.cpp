/* Leetcode question for removing duplicates in sorted array in increasing order*/
#include<iostream>
#include<vector>
using namespace std;
int removeDuplicates(vector<int>&nums){
    int i=1,j=0;
    while(i<nums.size()){
        if(nums[i]==nums[j]) ++i;
        else nums[++j]=nums[i++];
    }
    for(int i=0;i<=j;i++){
        cout<<i<<" ";
    }
    return j+1;
}
int main(){
    vector<int>v={0,0,1,1,2,2,3,4};
    int x=removeDuplicates(v);
    cout<<endl;
    cout<<x<<endl;
    return 0;
}