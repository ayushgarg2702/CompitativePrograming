// Next permutation
#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int start, int end){
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void PrintNextPermutation(int arr[], int size){
    if(size < 1){
        return;
    }
    if(size==1){
        cout<<arr[0];
        return;
    }
    int flag = 0;
    int i = 0;
    for(i = size-1; i >= 0; i--){
        if(i == 0){
            flag = -1;
            break;
        }
        if(arr[i]<arr[i-1]){
            continue;
        }
        break;
    }
    if(flag == -1){
        for(int j = size-1; j >= 0; j--){
            cout<<arr[j] <<" ";
        }
    }
    else{
        swap(arr[size-1],arr[i-1]);
        reverse(arr,i,size-1);
        for(i = 0; i < size; i++){
            cout<<arr[i] <<" ";
        }
    }
}


int main(){
    int arr[] = {1,2,3,6,5,4};
    // int arr[] = {3,2,1};
    int size = sizeof(arr) / sizeof(int);

    PrintNextPermutation(arr, size);

    return 0;
}