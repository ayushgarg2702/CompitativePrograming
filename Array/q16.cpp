// Inverse count in an array
#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    int result;
    solution(){
        result = 0;
    }
    int merge_check(int arr[], int size){
        int start = 0;
        int end = size - 1;
        merge(arr, size, start, end);
        return result;
    }
    int merge(int arr[], int size, int start, int end){
        if(start>=end){
            return 0;
        }
        int res = 0;
        int mid = start + (end - start) / 2;
        merge(arr,size,start,mid);
        merge(arr,size,mid+1,end);
        result += mergeing(arr,size,start,mid,end);
        return 0;
    }
    int mergeing(int arr[],int size,int start, int mid,int end){
        int res = 0;
        int *arr1 = new int[end - start];
        int k = 0, i, j;
        for(i = start, j = mid+1; i <= mid && j <= end;){
            if (arr[i] <= arr[j]){
                arr1[k] = arr[i];
                k++;
                i++;
            }
            else{
                arr1[k] = arr[j];
                res += mid - i + 1;
                k++;
                j++;
            }
        }
        if(i <= mid){
            for(i;i<=mid;i++){
                arr1[k] = arr[i];
                k++;
            }
        }
        if(j <= end){
            for(j;j<=end;j++){
                arr1[k] = arr[j];
                k++;
            }
        }
        for(int k = start,j =0; k <= end; k++,j++){
            arr[k] = arr1[j];
        }
        return res;
    }
};

int main(void){
    int arr[] = {2, 4, 1, 0, 5};
    int size = sizeof(arr)/sizeof(int);
    solution obj;
    int ans;
    ans = obj.merge_check(arr,size);
    cout<<ans;
    return 0;
}