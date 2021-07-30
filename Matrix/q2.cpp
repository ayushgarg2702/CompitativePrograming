// Search in sorted 2d array
#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int size, int search, int left, int right){
    int mid = left + (right - left) / 2;
    if (right <= left){
        return -1;
    }
    if( arr[mid] == search){
        return mid;
    }
    if( arr[mid] < search){
        return binarysearch(arr,size,search,mid+1,right);
    }
    else{
        return binarysearch(arr,size,search,left,mid);
    }
}


int Search(int arr[], int size, int element){
    int value = binarysearch(arr,size,element,0,size);
    if ( value < size && value >= 0){
        return value;
    }
    return -1;
}

int main(){
    int arr[][4] = {{1,2,3,7},{9,11,15,16},{21,22,25,26},{30,34,35,38}};
    int l = sizeof(arr[0])/sizeof(int);
    int h = sizeof(arr) / (l * sizeof(int));
    int L = -1;
    int search = 38;
    int i = 0;
    for(i = 0; i < h; i++){
        if ( arr[i][0] <= search && arr[i][l-1] >= search ){
            L = Search(arr[i], l, search);
            break;
        }
    }
    if ( L == -1){
        cout<< "Not found";
    }
    else{
        cout<< "Found "<<i+1 << " " <<L + 1;
    }

}
