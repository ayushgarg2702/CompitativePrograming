// Print leader of an array
// all right element are smaller than that no.

#include<bits//stdc++.h>
using namespace std;


int main(){
    int arr[] = {1,2,14,9,8,6,5,3,2,4};
    int size = sizeof(arr) / sizeof(int);

    cout<<arr[size-1]<<" ";

    int c_leader = arr[size-1];

    for(int i = size-2; i>=0; i--){
        if(arr[i]>c_leader){
            cout<<arr[i]<<" ";
            c_leader = arr[i];
        }

    }

    return 0;
}