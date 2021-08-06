// reverse an array

#include<bits/stdc++.h>
using namespace std;

void swap(int& a, int& b){
    int t = a;
    a = b;
    b = t;
}

int main(){
    int arr[] = {3,4,64,75,34,2,78,33,1};
    int size = sizeof(arr)/sizeof(int);

    // for(int i = size-1;i>=0;i--){                                                        // print arr reverse
    //     cout<<arr[i]<<" ";
    // }


    int start = 0;
    int end = size-1;

    while(end>=start){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i = 0; i<size ;i++){                                                        // print arr
        cout<<arr[i]<<" ";
    }


    return 0;
}