// Cholate distribution problem
#include<bits/stdc++.h>
using namespace std;

int main(void){
    int arr[] = {4,1,5,9,9,15};
    int size = sizeof(arr)/sizeof(int);
    int k = 4;
    sort(arr,arr+size);
    int ans = INT_MAX;
    for(int i = 0; i<= size - k; i++){
        if( (arr[i+k-1] - arr[i])< ans){
            ans = arr[i+k-1] - arr[i];
        }
    }
    cout << ans;
    return 0;
}