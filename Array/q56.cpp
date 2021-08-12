// Window slidding technique
// Find the maximum sum of k consutative intergers  from an array

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {2, 3, 5, -5, 8,9, -2, 1};
    int size = sizeof(arr) / sizeof(int);
    int k = 3;

    int max_sum = INT_MIN;
    int sum = 0;
    for(int index = 0; index < k; index++){
        sum += arr[index];
    }
    max_sum = sum;
    
    for(int index = k; index < size; index++){
        sum = sum + arr[index] - arr[index-k];
        // cout<<sum<<" ";
        max_sum = max(max_sum, sum); 
    }

    cout<<max_sum;



    return 0;
}