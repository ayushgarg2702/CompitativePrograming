// Maximum and minimum in array
#include <bits/stdc++.h>
using namespace std;

int main(void){
    int arr[] = {0,1,2,3,4,5,6};
    int max = arr[0],min = arr[0];
    int n = sizeof(arr)/sizeof(int);

    for ( int i = 0; i < n ; i++){
        if (max < arr[i])
            max = arr[i];
        if (min > arr[i])
            min = arr[i];
    }
    cout << "Max : " << max << "\n" << "Min : " << min;

    return 0;
}