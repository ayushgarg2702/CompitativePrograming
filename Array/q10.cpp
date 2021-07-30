// Minimum no. of jumps to reach end of the array
#include <bits/stdc++.h>
using namespace std;

class Solution {
    public :
    int jumps(int arr[], int n){
        int *jump = new int[n];
        if (n <= 0 || arr[0] == 0) 
            return INT_MAX;
        jump[0] = 0;

        for(int i = 1; i < n; i++){
            jump[i] = INT_MAX;
            for(int j = 0; j < i ; j++){
                if(i <= (arr[j]+j) && jump[j] != INT_MAX){
                    jump[i] = min(jump[i],jump[j]+1);
                }
            }
        }

        return jump[n-1];
    }
};


int main(void){
    int arr[] = {2 ,3 ,1 ,1 ,2 ,4 ,2 ,0 ,1 ,1};
    Solution obj;
    int size = sizeof(arr)/sizeof(int);
    int result = obj.jumps(arr,size);
    cout << result ;

    return 0;
}