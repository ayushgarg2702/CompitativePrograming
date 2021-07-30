// Maximum no. of 1 in a row of 2d array
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[][4] = {{0,0,1,1},{0,0,0,1},{1,1,1,1},{0,1,1,1}};
    int l = 4, h = 4;
    int count = 0 ,max = 0;
    for(int i = 0;i < h; i++){
        count = 0;
        // cout << l - (upper_bound(arr[i] , arr[i]+l, 0) - arr[i])<< " ";        This is used in when array is sorted in row wise.
        for(int j = 0; j < l; j++){
            count += arr[i][j];
        }
        if(count > max){
            max= count;
        }
    }
    cout << max;
}