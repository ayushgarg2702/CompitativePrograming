// Check array is pallindrome or not
#include<bits/stdc++.h>
using namespace std;

int palli(int no){
    int ans = 0 , number = no;
    while(no){
        ans = (ans * 10) + (no%10);
        no /= 10;
    }
    if(number == ans){
        return 1;
    }
    return 0;
}


int main(){
    int arr[] = {111,222,3313};
    int size = sizeof(arr) / sizeof(int);
    int f = 1;
    for(int i = 0; i < size; i++){
        f = palli(arr[i]);
        if (f == 0){
            break;
        }
    }
    if(f == 0){
        cout<<"not";
    }
    else{
        cout<<"yes";
    }

    return 0;
}