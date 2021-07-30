// Find if there is any array which sum is 0 (Non continuess element) (For continues element use Prefix method)
#include<bits/stdc++.h>
using namespace std;

int check_sum(vector<int> arr, int size, int sum, int tsum){
    if(tsum == sum){
        return 1;
    }
    if( size < 0 ){
        return 0;
    }


    size--;
    int t = arr[0];
    // cout<<t<<" ";
    arr.erase(arr.begin());
    if (tsum == INT_MIN)
        return max(check_sum( arr, size, sum, t),check_sum( arr, size, sum, tsum));
    else
        return max(check_sum( arr, size, sum, tsum + t),check_sum( arr, size, sum, tsum));
}

int main(void){
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(2);
    arr.push_back(-10);
    int size = arr.size();
    // for(int i = 0; i < size; i++){
    //     cout<<arr[i]<<" ";
    // }
    int sum = 0;
    int tsum = 0;
    for(int i = 0; i < size;i++){
        tsum += arr[i];
    }
    cout << check_sum(arr, size-1, sum, INT_MIN);
    return 0;
}