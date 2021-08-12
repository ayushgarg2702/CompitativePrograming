// Pair with given sum in array
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {8,3,4,2,1,9};
    int size = sizeof(arr) / sizeof(int);

    set<int> s_arr;
    int sum = 6;

    for(int i = 0; i < size; i++){
        if(s_arr.find(sum - arr[i]) == s_arr.end()){
            s_arr.insert(arr[i]);
        }
        else{
            cout<<"Found";
        }
    }




    return 0;
}