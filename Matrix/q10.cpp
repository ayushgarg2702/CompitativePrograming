// Rotate a matrix by 90 deg.
//  A = (A*(max_B+1) + B) / (max_B + 1)
//  B = (A*(max_B+1) + B) % (max_B + 1)
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int l = 4, h = 4;
    int rotate_arr[h][l];
    for(int i = 0; i < h; i++){
        for(int j = l-1; j >= 0; j--){
            cout<< arr[j][i] << " ";
        }
        cout<<"\n";
    }

    return 0;
}