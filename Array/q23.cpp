// Factorial of larger no.
#include<bits/stdc++.h>
using namespace std;

int multiple(int element, int arr[], int size){
    int carry = 0;
    int mul = 0;int i = 0;
    for(i = 0; i <= size; i++){
        mul = arr[i] * element;
        mul += carry;
        carry = mul / 10;
        arr[i] = mul % 10;
    }
    // cout << carry<<" " ;

        while(carry){
            arr[i] = carry%10;
            i++;
            size++;
            carry = carry/10;
        }
    cout << size<<" ";
    return size;
}

int factorial(int number, int* arr){
    if(arr[number] != 0 ){
        return arr[number];
    }
    int no_size = 1;
    int ar[number+1000];
    ar[1] = 1;
    for(int i = 2;i <= number; i++ ){
        no_size = multiple(i,ar,no_size); 
        // cout<< i << " ";
    }
    // cout<<no_size;
    for(int i = no_size;i> 0; i--){
        cout<<ar[i];
    }
    return 0;
}

int main(void){
    int number = 100;
    int arr[100000];
    arr[1] = 1;
    factorial(number, arr);
    return 0;
}