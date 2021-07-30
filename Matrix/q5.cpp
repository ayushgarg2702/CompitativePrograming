// print sorted array of row wise sorted array
// 1 5 9 13
// 2 6 10 14
// 3 7 11 15
// 4 8 12 16
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[][4] = { {1,5,9,13}, {2,6,10,14}, {18,7,11,15}, {20,8,12,16}};
    int l = 4, h =4;
    int final_arr[l*h + 1];

    // for(int i = 0; i < h;i++){
    // for(int j =0; j < l; j++){
    //     cout<<arr[i][j] << " ";
    // }
    // cout<<endl;
    // }
    for(int i1 = 0; i1< l*h; i1++){
        final_arr[i1] = -1;
    }
    // cout<<endl;
    for(int i = 0; i < h;i++)
        final_arr[i] = arr[i][0];
    int index;
    for(int i = 1; i < l; i++){
        index = 0;
        int j = 0;
        while(j < h && index < l*h){
            // cout << j<< " " <<index << " ";

            if(final_arr[index]<arr[j][i] && final_arr[index] != -1){
                index++;
            }
            else{
            // cout<<arr[j][i]<<" "<<final_arr[index] << " " << index<< " ";
                int temp = final_arr[index];
                final_arr[index] = arr[j][i];

                for(int t = index + 1; t <= h*l; t++){
                    int temp2 = final_arr[t];
                    final_arr[t] = temp;
                    temp = temp2; 
                }
            // cout<<endl;
                j++;
            }
        }
    }
    for(int i1 = 0; i1< l*h; i1++){
        cout<<final_arr[i1]<<" ";
    }
    cout<<endl;

    return 0;
}
