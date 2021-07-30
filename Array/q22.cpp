// Find the largest multiplation in an array (continues)
#include<bits/stdc++.h>
using namespace std;

int largest_continues_multiple(int* arr, int size){
    int min_mul=0, max_mul=0,mul_=0,min_=0,max_=0;
    for(int i = 0; i < size; i++){
        int temp = max_;
        max_ = max(arr[i], max( arr[i] * max_, min_ * arr[i]));
        min_ = min(arr[i], min( arr[i] * min_, temp * arr[i]));
        max_mul = max( max_mul, max( max_, min_));
    }
    return max_mul;
}


int main(void){
    int arr[] = {9, 5, -1, 0, -50,-2,-3};
    int size = sizeof(arr)/sizeof(int);
    cout << largest_continues_multiple(arr, size);


    return 0;
}