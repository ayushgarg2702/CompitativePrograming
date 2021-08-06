// Largest in an array

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {4,5,2,76,53,75,20,55};
    int size = sizeof(arr)/sizeof(int);

    int max = 0;
    for(int i =0; i < size;i++){
        if(max<arr[i])
            max = arr[i];
    }

    cout<<max;


    return 0;
}