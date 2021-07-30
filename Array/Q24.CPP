// lONGEST COINSECUTIVE SUBSEQUENCE
#include<bits/stdc++.h>
using namespace std;

int Coinsecutive_sequence(int* arr, int size){
    int con = 1,fcon = 0;
    sort(arr,arr+size);
    for(int i = 1; i < size; i++){
        if(arr[i] == arr[i-1]+1){
            con++;
        }
        else if(arr[i] == arr[i-1]){
            continue;
        }
        else{
            if (fcon < con){
                fcon = con;
            }
            con =1;
        }
    }
    if (fcon < con){
        fcon = con;
    }
    return fcon;
}
int effective_solu(int* arr, int size){
    unordered_set<int> s;
    int ans = 0;
    int i = 0;
    for(i=0;i<size;i++){
        s.insert(arr[i]);
    }
    for(i=0;i<size;i++){
        int j = arr[i];
        while(s.find(j) != s.end()){
            j++;
        }
        ans = max(ans,j-arr[i]);
    }
    return ans;
}

int main(void){
    int arr[] = {3,0,4,7,5,6,1};
    int size= sizeof(arr)/sizeof(int);
    // cout<<Coinsecutive_sequence(arr,size);
    cout<<effective_solu(arr,size);

    return 0;
}