// Constract LPS Array of a string
// Highest Same Proper prefix and sufix

#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "abcbabcbabcbaa";
    int size = str.size();
    // cout<<size;
    int arr[size];
    arr[0] = 0;
    int start = 0;
    int index = 1;

    while(index < size){
        if(str[index] == str[start]){
            start++;
            arr[index] = start;
            index++;
        }
        else{
            if(start == 0){
                arr[index] = 0;
                index++;
            }
            else{
                start = arr[start-1];
            }
        }


    }
    for(int i = 0;i <size;i++)
    cout<<arr[i]<<" ";

    return 0;
}