// MAximum sum sub array
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,5,-3,4,-5,8};
    // int arr[] = {-6,-3,-1,-5};

    int size = sizeof(arr)/sizeof(int);
    int p[size] = {0};
    p[0] = arr[0];
    for(int i = 1; i < size; i++){
        p[i] = max(p[i-1]+arr[i],arr[i]);
    }
    int m= arr[0];
    for(int i =1;i<size;i++){
        m = max(m,max(p[i],arr[i]));
    }

    cout<<m;
    return 0;
}