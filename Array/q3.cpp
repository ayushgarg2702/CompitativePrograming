//  Find kth maximum and minimum element in an array
# include <bits/stdc++.h>
using namespace std;

struct maxmin{
    int max;
    int min;
};

struct maxmin MaxMin(int arr[], int size, int n_element){
    struct maxmin MM;
    int temp;
    sort(arr, arr + size);
    if (n_element > size){
        MM.max = -1;
        MM.min = -1;
    }
    else {
        MM.max = arr[size - n_element];
        MM.min = arr[n_element - 1];
    }
    return MM;
}


int main(void){
    int arr[] = {0,1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(int);
    int n_element = 2;
    struct maxmin Ans = MaxMin(arr, size, n_element);
    cout << Ans.max <<" " << Ans.min;
    return 0;
}