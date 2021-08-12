// Sort array around a range
// ie. that range came in middle and all the smaller at starting and all the higher elemrnt than the rage ame at last

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {4,2,8,13,9,1,7,2,3,6,5,10,12,0};
    int size = sizeof(arr) / sizeof(int);

    int range_s = 5, range_l = 8;

    int mid = 0, low = 0, high = size - 1;

    while(mid<high){
        if(arr[mid] < range_s){
            swap(arr[mid],arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid]<= range_l){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    } 


    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}