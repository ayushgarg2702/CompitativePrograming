// Find the maximum difference between two value of a matrix when indexes is increased
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[][5] = {{ 1, 2, -1, -4, -20 },
             { -8, -3, 4, 2, 1 }, 
             { 3, 8, 6, 1, 3 },
             { -4, -1, 1, 7, -6 },
             { 0, -4, 10, -5, 1 }};
    int l = sizeof(arr[0]) / sizeof(int);
    int h = sizeof(arr)/(l*sizeof(int));

    int s[h][l];
    int s1[h][l];

    for(int i = 0; i< h; i++){
        for(int j = 0; j < l; j++){
            s[i][j] = INT_MIN;
            s1[i][j] = INT_MIN;
        }
    } 

    for(int i = h -1; i >= 0; i--){
        for(int j = l-2; j >= 0; j--){
            s[i][j] = max(s[i][j+1],arr[i][j+1]);
        }
    }
    for(int i = h -2; i >= 0; i--){
        for(int j = l-1; j >= 0; j--){
            s1[i][j] = max(s[i+1][j],s1[i+1][j]);
        }
    }
    int ans = 0;
    for(int i = 0; i< h-1; i++){
        for(int j = 0; j < l-1; j++){
            if(s1[i][j] - arr[i][j] > ans){
                ans = s1[i][j] - arr[i][j];
            }
        }
    } 
    cout<< ans;

    return 0;
}









// 1,   2, -1, -4, -20
// -8, -3,  4,  2,  1  
//  3,  8,  6,  1,  3 
// -4, -1,  1,  7, -6 
//  0, -4, 10, -5,  1 


//  2,  -1, -4,  -20, -20
//  4,   4,  2,    1,  1  
//  8,   6,  3,    3,  3 
//  7,   7,  7,   -6, -6 
//  10, 10,  1,    1,  1 


//  10,  10,  7,    3,  3
//  10,  10,  7,    3,  3  
//  10,  10,  7,    1,  1 
//  10,  10,  1,    1,  1 
//  10,  10,  1,    1,  1 
