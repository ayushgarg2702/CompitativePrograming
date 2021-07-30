// Median in a sort wise sorted Matrix
#include <bits/stdc++.h>
using namespace std;

int BinaryMedian( int arr[][4], int l, int h){
    int min = arr[0][0], max = arr[0][h-1];
    for(int i = 1; i < l; i++){
        if (min > arr[i][0]){
            min = arr[i][0];
        }
        if (max < arr[i][h-1]){
            max = arr[i][h-1];
        }
    }
    int desired = ((h * l + 1)/2);
    while(min < max){
        int mid = min + (max - min) /2;
        int count = 0;
        for (int i = 0 ;i < h; i++){
            count += upper_bound(arr[i] , arr[i] + l, mid) - arr[i];
        }
        if(count < desired){
            min = mid + 1;
        }
        else{
            max = mid;
        }
    }
    return min;
}


int main(){
    int arr[][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
    int l = sizeof(arr[0]) / sizeof (int);
    int h = sizeof(arr) / (l *sizeof(int));

    cout << BinaryMedian( arr, l, h);
    
}