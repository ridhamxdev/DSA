/* Leetcode question for finding a factorial of a large number*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int>fact(int N){
    vector<int>ans;
    int carry=0;
    ans.push_back(1);
    for(int i=2;i<=N;i++){
        for(int j=0;j<ans.size();j++){
            int x=ans[j]*i+carry;
            ans[j]=x%10;
            carry=x/10;
        }
        while(carry){
            ans.push_back(carry%10);
            carry/=10;
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>v=fact(n);
    for(int e:v){
        cout<<e<<" ";
    }
}