// left rotate an array by one;

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(int);

    int start = arr[0];
    for(int i = 0;i <size-1;i++){
        arr[i] = arr[i+1];
    }
    arr[size-1] = start;

    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}