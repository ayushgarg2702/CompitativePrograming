// Check for array is sorted or not

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {2,4,5,8,12,16,67,68,88,99};
    int size = sizeof(arr)/sizeof(int);

    int r = 1;

    for(int i = 1; i<size;i++){
        if(arr[i-1]>arr[i]){
            r = 0;
            break;
        }
    }

    if(r == 0){
        cout<<"Not sorted";
    }
    else
        cout<<"sorted";


    return 0;
}