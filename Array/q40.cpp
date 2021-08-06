// Remove duplicate from an sorted array

#include<bits/stdc++.h>
using namespace std;

void swap(int& a, int& b){
    int t =a;
    a = b;
    b = t;
}

int main(){
    int arr[] = {2,2,14,15,15,15,16,16,17};
    int size = sizeof(arr)/sizeof(int);


    // for(int i = size-1;i>0;i--){                                                                 // with swapping elements
    //     if(arr[i] == arr[i-1]){
    //         for(int j = i; j<size-1;j++){
    //             swap(arr[j],arr[j+1]);
    //         }
    //         size--;
    //     }
    // }
    // for(int i = 0; i< size; i++){
    //     cout<<arr[i]<<" ";
    // }


    int res = 1;                                                                                    // Overwritting element
    for(int i = 1; i<size;i++){
        if(arr[i] != arr[res-1]){
            arr[res] = arr[i];
            res++;
        }
    }

    for(int i = 0; i< res; i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}