#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void print(vector<vector<int>>&v)
{
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
// void sortt(vector<int>&v){
//     sort(v.begin(),v.end());
// }
bool mycomp(vector<int>&a,vector<int>&b){
    return a[1]<b[1];
}
void sorting(vector<vector<int>> &v){
    sort(v.begin(),v.end(),mycomp);
}
int main(){
    // vector<int>v={2,4,2,3,7,8,5};
    vector<vector<int>>v{
    {1,55},
    {0,22},
    {3,20},
    {0,90}
    };
    // sortt(v);
    print(v);
    sorting(v);
    cout<<"After sorting :\n";
    print(v);
    return 0;
}