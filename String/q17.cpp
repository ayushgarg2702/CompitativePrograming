// Word Wrap Problem
#include<bits/stdc++.h>
using namespace std;

void PrintWordWrap(int arr[], int n, int k){
    int ans[n];
    int dp[n];
    dp[n-1] = 0;
    ans[n-1] = n-1;
    int cost = 0;
    int curr_cost = 0;

    for(int i = n-2; i >=0; i--){
        // cost = 0;

        curr_cost = -1;
        dp[i] = INT_MAX;
        for(int j = i; j < n; j++){
            curr_cost += (arr[j] + 1);
            if(curr_cost>k){
                break;
            }
            if(j == n-1)
                cost = 0;
            else
                cost = (k - curr_cost)*(k - curr_cost) + dp[j+1];
            if(cost < dp[i]){
                dp[i] = cost;
                ans[i] = j;
            }
        }
    }
    int i = 0;
    // cout<<n;
    while(i < n){
        // cout<<"a"<<i<<"b"<<n<<"c";
        cout<<i+1<<" "<<ans[i]+1<<endl;
        i = ans[i] + 1;
        // cout<<"al"<<i<<"bl"<<n<<"cl";
    }
}


int main(){
    int arr[] = {3, 2, 2, 5};
    int k = 5;
    int size = sizeof(arr) / sizeof(int);
    PrintWordWrap(arr, size, k);


    return 0;
}