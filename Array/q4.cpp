// Given an array which consists of only 0, 1 and 2. Sort them without using any sorting algo.

#include <bits/stdc++.h>
using namespace std;

int main(void){
    int arr[] = {0,1,2,1,0,2,0};
    int size =sizeof(arr)/sizeof(int);
    int count_0 = 0, count_1 = 0, count_2 = 0;
    for ( int i = 0; i < size; i++){
        if (arr[i] == 0)
            count_0++;
        else if (arr[i] == 1)
            count_1++;
        else
            count_2++;
    }
    for ( int i = 0; i < size; i++){
        if (count_0 > 0){
            arr[i] = 0;
            count_0--;
        }
        else if (count_1){
            arr[i] = 1;
            count_1--;
        }
        else{
            arr[i] = 2;
            count_2--;
        }
    }
    for ( int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}