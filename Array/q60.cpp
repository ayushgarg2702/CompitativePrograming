// Qucik sort

#include<bits/stdc++.h>
using namespace std;

void quickSort(int arr[], int start, int end){
    if(end <= start){
        return;
    }
    int pivot = arr[end];
    int s = start, e = end-1;
    while(s<e){
        while(arr[e]>pivot){
            e--;
        }
        while(arr[s]<pivot){
            s++;
        }
        if(s<e){
            swap(arr[s],arr[e]);
        }
    }
    if(arr[s]>arr[end])
        swap(arr[s],arr[end]);
    quickSort(arr, start, s-1);
    quickSort(arr, s+1, end);
}


void quick_sort(int arr[], int size){
    if(size <= 1)
        return;
    quickSort(arr, 0, size-1);
}


int main(){
    int arr[] = {5,2,4,9,1,3,8,7,4};
    int size = sizeof(arr) / sizeof(int);

    quick_sort(arr, size);

    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}