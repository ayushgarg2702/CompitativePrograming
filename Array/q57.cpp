// Binary search

#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int search_element, int start, int end){
    if(start>end)
        return -1;
    int mid = start + (end-start)/2;
    if(arr[mid] == search_element)
        return mid;
    if(arr[mid] > search_element)
        return binary_search(arr,search_element,0,mid-1);

    return binary_search(arr,search_element,mid+1,end-1);

}



int main(){
    int arr[] = {0,1,2,3,4,5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(int);

    int search_element = 6;

    cout<<binary_search(arr,search_element,0,size-1);


    return 0;
}