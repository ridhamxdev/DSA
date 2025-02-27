/* Leetcode question for Adding two numbers in an array*/
#include<iostream>
#include<algorithm>
using namespace std;
string sum(int *a,int n,int *b,int m){
    int i=n-1;
    int j=m-1;

    int carry=0;
    string ans;
    while(i>=0 && j>=0){
        int x=a[i]+b[j]+carry;
        int digit=x%10;
        ans.push_back(digit +'0');
        carry=x/10;
        i--;
        j--;
    }
    while(i>=0){
        int x=a[i]+0+carry;
        int digit=x%10;
        ans.push_back(digit +'0');
        carry=x/10;
        i--;
    }
    while(j>=0){
        int x=0+b[j]+carry;
        int digit=x%10;
        ans.push_back(digit +'0');
        carry=x/10;
        j--;
    }
    if(carry){
        ans.push_back(carry+'0');
    }
    while(ans[ans.size()-1]=='0'){
        ans.pop_back();
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main(){
    int a[]={9,2,4,2};
    int b[]={3,4,5};
    int n=4;
    int m=3;
    string x=sum(a,n,b,m);
    cout<<"Sum is :"<<x<<endl;
    return 0;
}