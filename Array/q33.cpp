// Mininum swap and k together
#include<bits/stdc++.h>
using namespace std;


int main(){
    int arr[] = {5,9,1,3,14,2,10,4};
    int size = sizeof(arr) / sizeof(int);
    int k =6;

    int small = 0;
    for(int i =0; i < size; i++){
        if(arr[i] <= k){
            small++;
        }
    }
    int swap = 0;
    for (int i = 0; i < small;i++){
        if(arr[i] > k){
            swap++;
        }
    }
    int ans = swap;
    for(int i = 0, j= small;j < size; i++,j++){
        if(arr[i] > k){
            swap--;
        }
        if(arr[j] > k){
            swap++;
        }
        ans = min(ans,swap);
    }
    cout<<ans;
    return 0;
}