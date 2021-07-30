// Reverse a array
#include <bits/stdc++.h>

using namespace std;

int main(void){
    int arr[] = {0,2,4,3,4,1};
    int temp;
    int i = 0, j = sizeof(arr)/sizeof(int) - 1;
    for(i,j;j>=i;i++,j-- ){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for(int i = 0; i < sizeof(arr)/sizeof(int); i++)
        cout<<arr[i]<<" ";

    return 0;
}