// Minimum Consecutive flips to make a array of 0's and 1's identical
// index from 1 to N
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {0, 1, 1, 1, 0, 0, 0, 1, 0};
    int size = sizeof(arr) / sizeof(int);
    // cout<<size;
    int ones_flip = 0;
    int zeros_flip = 0;

    if(arr[0] == 1)
        ones_flip++;
    else
        zeros_flip++;

    for(int index = 1; index < size; index++){
        if(arr[index] == arr[index-1])
            continue;
        if(arr[index] == 1)
            ones_flip++;
        else
            zeros_flip++;
    }
    
    if((ones_flip==1 && zeros_flip ==0)||(ones_flip==0||zeros_flip==1)){
        cout<<"0";
    }
    else if(ones_flip < zeros_flip){
        for(int index = 0; index < size; index++){
            if(index == 0 && arr[index] == 1){
                cout<<index+1<<" ";
                continue;
            }
            if(index == 0)
                continue;
            
            if(arr[index] == 1 && arr[index-1] == 0){
                cout<<index+1<<" ";
            }
            
            if(arr[index] == 0 && arr[index-1] == 1 && index > 1){
                cout<<index-1+1<<"\n";
            }
            

        }
    }
    else{
        for(int index = 0; index < size; index++){
            // cout<<"A"<<size;
            if(index == 0 && arr[index] == 0){
                cout<<index+1<<" ";
                continue;
            }
            if(index == 0)
                continue;
            if(arr[index] == 0 && arr[index-1] == 1){
                cout<<index+1<<" ";
            }
            
            if(arr[index] == 1 && arr[index-1] == 0 && index > 1){
                cout<<index-1+1<<"\n";
            }
            

        }

    }



    return 0;
}