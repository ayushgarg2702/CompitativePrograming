// Minimum sum sub array

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {3,-2,-5,6,-8,7};
    int size = sizeof(arr) / sizeof(int);

    for(int i = 0; i < size; i++){
        arr[i] = -arr[i];
    }
    int p[size];
    p[0] = arr[0];

    for(int i =1;i < size;i++){
        p[i] = max(arr[i],p[i-1]+arr[i]);
    }

    int ans = p[0];
    for(int i =1;i <size;i++)
        ans = max(p[i],ans);

    cout<<-ans;


    return 0;
}