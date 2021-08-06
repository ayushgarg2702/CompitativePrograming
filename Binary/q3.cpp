// Odd occrance from an array

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {11,11,2,24,2,1,5,51,24,5,51};
    int size = sizeof(arr)/sizeof(int);
    int ans;
    ans = arr[0];
    for(int i = 1;i<size; i++)
        ans = ans ^ arr[i];
    cout<<ans;
}