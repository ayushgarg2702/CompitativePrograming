// Find the maximum square formed by a binary matrix
#include<bits/stdc++.h>
using namespace std;

int main(){

    // cout<< arr[3][3-1]<<arr[3-1][3]<<arr[3-1][3-1]<<"\n";
    int row = -1, col = -1, value = -1;

    for(int i = 0;i < h;i++){
        for(int j = 0; j < l; j++){
            // cout<<S[i][j] <<" ";
            if(value <= S[i][j]){
                value = S[i][j];
                row = i;
                col = j;
            }
        }
        // cout<<"\n";
    }

    // cout<<row <<" " << col <<" "<<value<<" "<<endl;

    for(int i = row - value +1; i <= row; i++){
        for(int j = col - value + 1; j <= col; j++){
            cout<<arr[i][j] << " ";
        }
        cout<<endl;
    }

    return 0;
}