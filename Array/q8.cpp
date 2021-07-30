// Find maximum sum in sub array in continous.
#include <bits/stdc++.h>
using namespace std;

int main(void){
    int arr[] = {1,2,-2,4,-2,-1,5,1,-1};
    int size = sizeof(arr)/sizeof(int);
    int max_sum = 0, sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
        if(sum < 0)
            sum = 0;
        if(max_sum < sum){
            max_sum = sum;
        }
    }
    cout<<max_sum;
    return 0;
}