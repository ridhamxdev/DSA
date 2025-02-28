/* Leetcode medium level question for key difference pairs in an array*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
int kpair(vector<int>&nums,int k){
    int n=nums.size();
    sort(nums.begin(),nums.end());
    set<pair<int,int>> ans;
    int i=0,j=1;
    while(j<n){
        int diff=nums[j]-nums[i];
        if(diff==k){
            ans.insert({nums[i],nums[j]});
            i++;j++;
        }
        else if(diff > k){
            i++;
        }
        else{
            j++;
        }
        if(i==j)
        {
            j++;
        }
    }
    return ans.size();
}
int main(){
    vector<int>v;
    int n;
    cin>>n;
    cout<<"Enter:"<<endl;
    for(int i=0;i<n;i++){
        int temp;
        cout<<"Enter the value:";
        cin>>temp;
        v.push_back(temp);
    }
    int k=2;
    int x=kpair(v,k);
    cout<<x<<endl;
    return 0;
}