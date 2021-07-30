// Three way partitioning
#include<bits/stdc++.h>
using namespace std;
void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}
int main(void){
    int arr[] = {3,1,4,5,3,6,2};
    int size = sizeof(arr) / sizeof(int);
    int m1 = 1;
    int m2 = 3;
    int start = 0, end =size-1;
    int s =0, e = size-1;

    // sort(arr,arr+size);

    for(int start = 0; start < size;){
        if(arr[start] < m1){
            swap(arr[s], arr[start]);
            s++;
        }
        start++;
    }
    for(end; end > s;){
        if(arr[end] <= m2){
            swap(arr[end], arr[s]);
            s++;
        }
        else{
            end--;
        }
    }
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}