// Find that if second aaray is subset of first array
#include<bits/stdc++.h>
using namespace std;

int main(void){
    int arr1[] = {1,6,5,2,3,4};
    int arr2[] = {1,6,3,7,4};
    int size1 = sizeof(arr1)/sizeof(int);
    int size2 = sizeof(arr2)/sizeof(int);

    sort(arr1, arr1 + size1);
    sort(arr2, arr2 + size2);
    int count = 0;
    for(int j = 0, i = 0; (i < size1) && (j < size2);){
        if (arr1[i]==arr2[j]){
            i++;
            j++;
            count++;
        }
        else if(arr1[i] > arr2[j]){
            j++;
        }
        else{
            i++;
        }
    }

    if (count == min(size1,size2)){
        cout<<"yes";
    }

    return 0;
}