// second largest in an array
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {25,54,65,45,76,34,99,22,77,56,87,35,98,99};
    int size = sizeof(arr)/sizeof(int);

    int max = 0,max2=0;
    for(int i = 0; i<size;i++){
        if(arr[i] == max){                                                                          // For repeating number 
            continue;
        }
        if(arr[i]>max){
            max2 = max;
            max = arr[i];
        }
        else if(max2 < arr[i]){
            max2= arr[i];
        }

    }
    cout<<max2;

    return 0;
}