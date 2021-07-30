// Move all the -ve elements to one side of the array
# include<bits/stdc++.h>
using namespace std;

int main(void){
    int arr[] = {1,3,-1,-3,2,-2};
    int size = sizeof(arr)/sizeof(int);
    int temp, tem;

    for ( int i = 1, j = 0;i < size; i++ ){
        if (arr[i] < 0){
            tem = arr[j];
            for(int t = j; t < i ;t++ ){
                temp = arr[t+1];
                arr[t+1] = tem;
                tem = temp;
            }
            arr[j] = temp;            
            j++;
        }
    }
    for ( int i = 0;i < size; i++ ){
        cout << arr[i] <<" ";
    }

    return 0;
}