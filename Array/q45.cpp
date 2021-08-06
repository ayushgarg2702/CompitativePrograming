// Maximum value of arr[j] - arr[i], where j > i

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]= {2,4,5,5,12,8,6,9,15,1,6};
    int size = sizeof(arr) / sizeof(int);
    int result = arr[1] - arr[0];
    int min = arr[0];
    int max = arr[1];
    for(int i = 1; i < size;i++){
        if(result < (arr[i] - min)){
            result = arr[i] - min;
        }
        if(min >arr[i]){
            min = arr[i];
        }
    }

    cout<<result;


    return 0;
}