// Tapping rain water Problem

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {2,0,0,1,4,0,2};
    int size = sizeof(arr)/sizeof(int);
    int ans = 0;
    int l_highest[size];
    int r_highest[size];

    l_highest[0] = arr[0];
    r_highest[size-1] = arr[size-1];

    for(int i = 1;i<size; i++){
        l_highest[i] = max(arr[i],l_highest[i-1]);
        r_highest[size-1-i] = max(arr[size-1-i],r_highest[size-i]);
    }

    // for(int i =0;i<size;i++){
    //     cout<<l_highest[i]<<" ";
    // }
    // cout<<endl;


    // for(int i =0;i<size;i++){
    //     cout<<r_highest[i]<<" ";
    // }

    // cout<<endl;

    for(int i =1;i<size-1;i++){
        ans+=min(r_highest[i] , l_highest[i])  - arr[i];
    }

    cout<<ans;

    return 0;
}