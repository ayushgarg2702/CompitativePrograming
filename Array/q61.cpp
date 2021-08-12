// inversion in a array
// ie 4, 1, 2, 0 total 4 inversion (4,1),(4,2),(4,0),(1,0) 

#include<bits/stdc++.h>
using namespace std;


int merge(int arr[], int start, int end){
    if(end <= start)
        return 0;
    int s_arr[end-start+1];
    int mid = start + (end - start)/2;
    int m = mid+1;
    int k = 0;
    int s = start, e = end;
    int ans = 0;
    while(start<=mid && m <= end){
        if(arr[start] <= arr[m]){
            s_arr[k] = arr[start];
            k++;
            start++;
        }
        else{
            s_arr[k] = arr[m];
            m++;
            k++;
            ans+= -start+mid+1;
        }
    }
    while(start<=mid){
        s_arr[k] = arr[start];
        start++;
        k++;
        // ans++;
    }
    while(m<=end){
        s_arr[k] = arr[m];
        m++;
        k++;
   
    }
    for(int i = 0; i < k;i++){
        arr[s+i] = s_arr[i];
    }
    return ans;
    
}


int inversionCount(int arr[], int start, int end){
    if(end <= start)
        return 0;
    int ans = 0;
    int mid = start + (end - start) / 2;
    ans += inversionCount(arr,start,mid);
    ans += inversionCount(arr,mid+1,end);
    ans += merge(arr,start,end);
    return ans;
}


int inversion_count(int arr[], int size){
    if(size <= 1)
        return 0;
    return inversionCount(arr, 0, size-1);
}


int main(){
    int arr[] = {4,1,3,2,0};
    int size = sizeof(arr) / sizeof(int);

    cout<< inversion_count(arr,size);

    // for(int i = 0; i<size ; i++)
    //     cout<<arr[i]<<" ";
    return 0;
}