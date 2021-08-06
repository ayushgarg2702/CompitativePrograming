// Buy or sell stock to maximize the profit

#include<bits/stdc++.h>
using namespace std;


int main(){
    int arr[] = {1,5,3,4,12};
    // int arr[] = {5,3,2};

    int size = sizeof(arr) / sizeof(int);
    int buy = arr[0],sell=arr[0];
    int profit =0;

    for(int i = 0; i< size; i++){
        while(i<(size-1) && arr[i]> arr[i+1]){
            i++;
        }
        buy = arr[i];
        sell = arr[i];
        while(i<(size-1) && arr[i]<arr[i+1]){
            i++;
        }
        if(i<size)
            sell = arr[i];
        profit+= (sell - buy);
    }

    cout<<profit;


    return 0;
}