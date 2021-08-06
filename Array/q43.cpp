// Left rotate an array by d element

#include<bits/stdc++.h>
using namespace std;

void left_rotate(int arr[], int size){
    int s = arr[0], i;
    for(i = 0;i<size-1;i++){
        arr[i] = arr[i+1];
    }
    arr[i] = s;
}



void left_Rotate(int arr[],int size, int d){
    int temp[d];
    for(int i = 0; i<d;i++){
        temp[i] = arr[i];
    }
    for(int i = 0; i < size-d ; i++){
        arr[i] = arr[i+d];
    }
    for(int i = 0;i<d;i++){
        arr[size-d+i] = temp[i];
    }
}

void swap(int& a, int& b){
    int t = a;
    a = b;
    b = t;
}

void rotate(int arr[], int min, int max){
    while(min<max){
        swap(arr[min],arr[max]);
        min++;
        max--;
    }
}

void leftRotate(int arr[], int n, int d){
    rotate(arr,0,d-1);
    rotate(arr,d,n-1);
    rotate(arr,0,n-1);
}





int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/ sizeof(int);

    int d = 3;

    // for(int i = 0;i<d;i++){
    //     left_rotate(arr,size);
    // }

    // left_Rotate(arr, size, d);

    leftRotate(arr, size, d);


    for(int i = 0 ; i< size; i++){
        cout<<arr[i]<<" ";
    }




    return 0;
}