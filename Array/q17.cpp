// Best time to buy or sell stock
#include<bits/stdc++.h>
using namespace std;

int main(void){
    int arr[] = {7,12,1,2,5,6,3,4};
    int size = sizeof(arr)/sizeof(int);
    int min = INT_MAX, mdif = INT_MIN;
    int buy, sell;
    for(int i = 0; i < size; i++){
        if(min > arr[i]){
            min  = arr[i];
            buy = i + 1;
        }
        if (mdif < arr[i]-min){
            mdif = arr[i]-min;
            sell = i + 1;
        }
    }
    cout<<mdif << "  buy at: "<<buy << "  sell at: "<<sell;
    return 0;
}