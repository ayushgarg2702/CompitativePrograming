// Move zero in end of an array
#include<bits/stdc++.h>
using namespace std;

void swap(int& a, int& b){
    int t = a;
    a = b;
    b = t;
}

int main(){
    int arr[] = {1, 2, 3, 0, 4, 0, 6, 0, 0, 5, 7, 0};
    int size = sizeof(arr)/sizeof(int);
    int z = 0;

    for(int i = 0; i < size; i++){
        if(arr[i]!=0){
            swap(arr[i],arr[z]);
            z++;
        }
    }


    for(int i = 0; i < size; i++){
     cout<<arr[i]<<" ";   
    }

    return 0;
}