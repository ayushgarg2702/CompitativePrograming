// find Triplet that sum to a given array
#include<bits/stdc++.h>
using namespace std;

int twice(int arr[], int size, int k, int index){
    for(int i = 0,j = size-1; i < j;){
        if(i == index){
            i++;
            continue;
        }
        if(j == index){
            j--;
            continue;
        }
        if(arr[i]+arr[j] == k){
            return 1;
        }
        if(arr[i] + arr[j] > k){
            j--;
            continue;
        }
        else{
            i++;
            continue;
        }
    }
    return 0;
}

bool triplet(int arr[], int size, int k){
    int value;
    for(int i = 0; i < size; i++){
        value = twice(arr, size, k - arr[i], i);
        if (value == 1){
            return true;
        }
    }
    return false;
}



int main(void){
    int arr[] = {5,1,3,4,4};
    int size = sizeof(arr) / sizeof(int);
    int k = 13;
    sort(arr, arr + size);
    cout<<triplet(arr, size, k); 

    return 0;
}