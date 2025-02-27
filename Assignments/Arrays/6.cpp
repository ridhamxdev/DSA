/* Spiral matrix*/
#include<iostream>
#include<vector>
using namespace std;
vector<int> spiralPrint(vector<vector<int>>matrix){
    int m=matrix.size();
    int n=matrix[0].size();
    vector<int>ans;
    int total_ele=m*n;
    int startingrow=0;
    int startingcol=0;
    int ending_row=m-1;
    int ending_col=n-1;

    int count=0;

    while(count<total_ele){
        for(int i=startingcol;i<=ending_col && count<total_ele;i++){
            ans.push_back(matrix[startingrow][i]);
            count++;
        }
        startingrow++;
        for(int i=startingrow;i<=ending_row && count<total_ele;i++){
            ans.push_back(matrix[i][ending_col]);
            count++;
        }
        ending_col--;
        for(int i=ending_col;i>=startingcol && count<total_ele;i--){
            ans.push_back(matrix[ending_row][i]);
            count++;
        }
        ending_row--;
        for(int i=ending_row;i>=startingrow && count<total_ele;i--){
            ans.push_back(matrix[i][startingcol]);
            count++;
        }
        startingcol++;
    }
    return ans;
}
int main(){
    vector<vector<int>>v{
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    vector<int>vv=spiralPrint(v);
    for (int i = 0; i < vv.size(); i++)
    {
        cout<<vv[i]<<" ";
    }
    
    return 0;
}