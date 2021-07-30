// Minimize the maximum height between the arr of towers
#include <bits/stdc++.h>
using namespace std;

int main(void){
    int arr[] = {7, 9, 7, 7, 5, 10, 2, 6, 5, 6};

    int size = sizeof(arr)/sizeof(int);
    int k = 5;
    sort(arr,arr+size);
    int min_, max_, result = arr[size - 1] - arr[0];
    for(int i = 1; i < size; i++){
        if (arr[i] >= k){
            min_ = min(arr[0]+k , arr[i] -k);
            max_ = max(arr[i - 1] + k , arr[size-1] -k);
            result = min(result, max_ - min_);
        }
    }
    cout<<result;
    return 0;
}