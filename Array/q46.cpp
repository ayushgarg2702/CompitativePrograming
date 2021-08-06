// Print frequency of each element in a sorted array
#include<bits/stdc++.h>
using namespace std;

int main(){
    int  arr[] = {22,22,45,45,45,77,99,99,99,100};
    int size = sizeof(arr)/sizeof(int);


    int element = arr[0];
    int frequency = 1;

    for(int  i = 1; i< size;i++){
        if(arr[i] == element){
            frequency++;
        }
        else{
            cout<<element<<" : "<<frequency<<endl;
            element = arr[i];
            frequency = 1;
        }

    }

    cout<<element<<" : "<<frequency<<endl;


    return 0;
}