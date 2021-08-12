// Merge sort

#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int start, int end){
    int s = start, e = end;
    int mid = start + (end - start)/2;
    int sortedArray[end - start+1];
    int k = 0;
    int m = mid+1;
    while(start<=mid && end >= m){
        if(arr[start] <= arr[m] ){
            sortedArray[k] = arr[start];
            start++;
            k++;
        }
        else{
            sortedArray[k] = arr[m];
            m++;
            k++;
        }
    }
    while(start <= mid){
        sortedArray[k] = arr[start];
        start++;
        k++;
    }
    while(end >= m){
        sortedArray[k] = arr[m];
        m++;
        k++;
    }

    // for(int i = 0; i< k;i++){
    //     cout<<sortedArray[i]<<" ";
    // }
    // cout<<endl;
    // k = 0;
    for(int i = s; i <= end;i++){

        arr[i] = sortedArray[i-s];
        // k++;
        // cout<<arr[i]<<" ";
    }
    // cout<<endl;
    
    return;
}

void mergeSort(int arr[], int start, int end){
    if(end<=start){
        return;
    }
    int mid = start + (end - start)/2;
    // cout<<mid<<" ";
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,end);
}


void merge_sort(int arr[], int n){
    if(n<=1)
        return;
    mergeSort( arr, 0, n-1);
}



int main(){
    int arr[] = {5,2,4,3,1,6,7,9};
    int size = sizeof(arr) / sizeof(int);


    merge_sort(arr, size);

    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }





    return 0;
}