// Find median of two sorted array of same size
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr1[] = {2,23,55};
    int arr2[] = {12,13,15,20};
    int size1 = sizeof(arr1) / sizeof(int);
    int size2 = sizeof(arr2) / sizeof(int);
    int ans = 0;
    int ele1 = 0,ele2 = 0;
    for(int i = 0, j = 0;i<size1 && j < size2;){
        if(arr1[i]<arr2[j]){
            ele1 = arr1[i];
        }
        else{
            ele1 = arr2[j];
        }
        if(i+j == (((size1+size2)/2))){
            break;
        }
        if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
        ele2 = ele1;

    }  
    cout<<endl;
    if((size1+size2)%2 == 0){
        cout << (ele1 + ele2)/2;
    }
    else{
        cout<<ele1;
    }


    return 0;
}