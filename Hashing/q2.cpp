// count distinct element in an array
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1, 12, 3, 5, 1, 5, 2, 3, 1, 5, 12, 12, 4, 12, 1, 5, 9};
    int size = sizeof(arr) / sizeof(int);
    set<int> s_arr;
    for(int i = 0; i < size; i++){
        s_arr.insert(arr[i]);
    }
    cout<<s_arr.size();

    return 0;
}