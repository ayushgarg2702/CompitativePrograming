// Implement next lexicographially greater no.
#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    int* reverse (int arr[], int size, int start, int end){
        int *arr1 = new int[size];
        int i = 0;
        for(i = 0; i < start;i++){
            arr1[i]=arr[i];
        }
        for(int j = end; j >=start;j--,i++){
            arr1[i] = arr[j];
        }
        return arr1;
    }
    void swap(int& a, int& b){
        a = a * b;
        b = a / b;
        a = a / b;
    }
};

int main(void){
    int arr[] = {1,2,3};
    int size = sizeof(arr)/sizeof(int);
    int* arr1 = new int[size];
    solution obj;
    int start = 0;
    for( int j = size-2;j >= 0; j--){
        if (arr[j] < arr[j+1]){
            obj.swap(arr[j],arr[j+1]);
            start = j+1;
            break;
        }
    }

    arr1 = obj.reverse(arr,size,start,size-1);

    for(int i = 0; i < size; i++){
        cout<<arr1[i]<<" ";
    }


    return 0;
}