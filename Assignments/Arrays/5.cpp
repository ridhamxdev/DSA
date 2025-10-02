/* Common elements in 3 sorted array*/
#include <iostream>
#include <set>
#include <vector>
using namespace std;
vector<int> common(int arr[], int b[], int c[], int n1, int n2, int n3)
{
    std::vector<int>an;
    set<int>st;
    int i, j, k;
    i = j = k = 0;
    while (i < n1 && j < n2 && k < n3)
    {
        if (arr[i] == b[j] && b[j] == c[k])
        {
            st.insert(arr[i]);
            i++,
            j++,
            k++;
        }
        else if (arr[i] < b[j])
        {
            i++;
        }
        else if (b[j] < c[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }
    for (auto i : st)
    {
        an.push_back(i);
    }
    return an;
}
int main()
{
    int arr[3] = {3,3,3};
    int b[3] = {3,3,3};
    int c[3] = {3,3,3};
    int n3 = 3;
    int n1 = 3;
    int n2 = 3;
    // int arr[6] = {1, 5, 10, 20, 40, 80};
    // int b[5] = {6, 7, 20, 80, 100};
    // int c[8] = {3, 4, 15, 20, 30, 70, 80, 120};
    // int n1 = 6;
    // int n2 = 5;
    // int n3 = 8;
    vector<int>x = common(arr, b, c, n1, n2, n3);
    cout << "Answer is "<< endl;
    for(int i=0;i<x.size();i++){
        cout<<x[i]<<" ";
    }
}