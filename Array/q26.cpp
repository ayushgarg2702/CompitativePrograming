// Maximum profit by buying and selling a share at most twice
#include<bits/stdc++.h>
using namespace std;

// // Mistake in this concept is we cann't do merging if we find three or more max no.
// int Maximum_profit(int arr[],int size){
//     int max1 = 0, max2 = 0, p1 = -1, p2 = arr[0];
//     int diff; 
//     for (int i = 1; i < size; i++){
//         if (arr[i] > p1){
//             p1 = arr[i];
//         }
//         else{
//             diff = p1 - p2;
//                 p2 = arr[i];

//         }
//         max1 = max(diff, max1);
//         if (max1 > max2){
//             int temp = max2;
//             max2 = max1;
//             max1 = temp;
//         }
//     cout << max1 << " " << max2 << "\n ";
//     }
//     return max1+max2;
// }

// Mistake in this concept I divide array at same point.
int Maximum_profit(int arr[], int size){
    int profit[size] = {0};
    int profit2[size] = {0};

    int max_price = arr[size-1];
    cout<<"0 ";
    for(int i = size -2; i >= 0; i--){
        if(max_price < arr[i]){
            max_price = arr[i];
        }


        profit[i] = max_price - arr[i];
        cout<<profit[i]<<" ";
    }
    cout<<"\n";
    cout<<"0 ";

    int min_price = arr[0];
    for(int i = 1; i < size; i++){
        if(min_price > arr[i]){
            min_price = arr[i];
        }


        profit2[i] = arr[i] - min_price;
        cout<<profit2[i]<<" ";
    }
    cout<<"\n";

    int result = 0;
    for(int i = 0;i < size; i++){
        int a = *max_element(profit2,profit2+i);
        int b = profit[i];
        cout << a+b<<" ";
        profit[i] += a;
    }
    // sort(profit,profit+size);


    return *max_element(profit,profit+size);
}


int main(void){
    int arr[] = {5,8,9,10,13};
    int size = sizeof(arr)/sizeof(int);
    cout << Maximum_profit(arr, size);
    return 0;
}