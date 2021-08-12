// Cholate distribution

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {4,2,8,5,11,12,14};
    int size = sizeof(arr)/sizeof(int);
    int k = 3;

    int min_diff = INT_MAX;

    sort(arr, arr+size);

    for(int i = 0; i<size - k +1;i++){
        min_diff = min(min_diff, arr[i+k-1] - arr[i]);
    }
    cout<<min_diff;


    return 0;
}