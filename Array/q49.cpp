// Maximum consecutive 1's in a binary array
#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {0, 1, 1, 1, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 1, 1, 0, 1, 1, 0, 1, 0};
    // int arr[] = { 0,0,0,0};

    int size = sizeof(arr) / sizeof(int);

    int c = 0,r=0;

    for(int i = 0; i<size;i++){
        if(arr[i]==1){
            c++;
        }
        else{
            r = max(r,c);
            c=0;
        }
    }

    r = max(r,c);


    cout<<r;


    return 0;
}