// Find maximum sum sub array which contain equal no. of 0's and 1's
// 
// 
// 1     1     0     1     1     0     1     0     0
// 1     1    -1     1     1    -1     1    -1    -1
// 1     2     1     2     3     2     3     2     1
// 1,0  2,1               3,4                       
// 
// 


// 1    0    1    0
// 1   -1    1   -1
// 1    0    1    0
// 1,0 0,1 
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,1,0,1,1,0,1,0,1,0,0};
    int size = sizeof(arr) / sizeof(int);
    int res = 0;
    int sum = 0;
    int start = 0;
    unordered_map<int, int> m_arr;

    for(int i = 0; i < size;i++){
        if(arr[i] == 0){
            arr[i] = -1;
        }
    }

    for(int i = 0; i < size; i++){
        sum += arr[i];
        if(sum == 0 && start == 0){
            res = max(res, i - start+1);
            start = i + 1;
            m_arr[sum] = -1;
        }
        else if(m_arr.find(sum) != m_arr.end()){
            res = max(res,i - m_arr[sum]);
        }
        else{
            m_arr[sum] = i;
        }
    }
    cout<<res;

    return 0;
}