// Smallest subarray with sum greater than x
#include<bits/stdc++.h>
using namespace std;

int main(void){
    int arr[] = {3,2,52,7,2,9};
    int size = sizeof(arr) / sizeof(int);
    int k = 70;

    sort(arr,arr+size);
    int ans = 0;
    for(int i = size - 1; i >= 0; i--){
        if(ans+arr[i] > k){
            cout<<size - i;
            break;
        }
        ans += arr[i];
    }

    return 0;
}