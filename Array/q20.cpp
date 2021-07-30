// Rearrange the array in alternative postive and negative no.
#include<bits/stdc++.h>
using namespace std;

void swap(int& a, int& b){
    int t = a;
    a = b;
    b = t;
}
void rotate(int arr[], int start, int end){
    int temp = arr[start], t;
    for(int i = start+1;i < end;i++){
        t = arr[i];
        arr[i] = temp;
        temp = t;
    }
    arr[start] = temp;
}

int main(void){
    int arr[] = {-5, -2, 5, 2, -4, 7,-6,-2,0,-3,-5};
    int size = sizeof(arr)/sizeof(int);

    sort(arr,arr+size,greater<int>());
    int i = 0, j = size-1;

    // for(int i = 0; i < size; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    for(i, j; i < size; i++){
        if(arr[j] < 0 && arr[i] >= 0){
            rotate(arr,i+1,j);
            swap(arr[i],arr[i+1]);
            i++;
        }
        else{
            break;
        }
    }
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}