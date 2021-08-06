// Maximum Length Even - odd Subarray

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5, 6 , 7 , 8 , 9 ,1, 5, 4 ,5 ,4 ,3, 2};
    int size = sizeof(arr) / sizeof(int);

    int e_o =arr[0]%2;
    int c =1;
    int ans = 0;
    for(int i =0; i<size;i++){
        arr[i] = arr[i]%2;
        // cout<<arr[i]<<" ";
    }

    for(int i =1; i<size;i++){
        if(arr[i] != e_o){
            e_o = arr[i];
            c++;
            ans = max(ans,c);
        }
        else{
            c=1;
        }
    }
    cout<<ans;
}