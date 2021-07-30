// Print a Matrix in spiral form

// 1 2 3 4 5 21 
// 6 7 8 9 10 22 
// 11 12 13 14 15 23
// 16 17 18 19 20 24
// 31 32 33 34 35 25
#include<bits/stdc++.h>
using namespace std;

int main(void){
    int arr[][4] = {{1,2,3,4},{6,7,8,9},{11,12,13,14},{16,17,18,19}};
    int l = 4, h = 4;
    for( int i = 0; i <= h / 2 ; i++){
        for( int j = i; j < (l - i - 1); j++){
            cout << arr[i][j] << " ";
        }

        for( int j = i; j < (h-i); j++){
            cout<<arr[j][l - 1 - i] << " ";
        }
        for ( int j = l - 2 - i; j > i ; j--){
            cout<< arr[h - 1 - i][j] << " ";
        }
        for ( int j = h - 1- i; j > i; j--){
            cout << arr[j][i] << " ";
        }
    }

    return 0;
}