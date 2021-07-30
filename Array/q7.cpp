// cyclic rotate a array by 1
# include <bits/stdc++.h>
using namespace std;

int main(void){
    int arr[] = {0,1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(int);
    int tem ,temp;
    tem = arr[0];
    for(int i = 1; i < size; i++){
        temp = arr[i];
        arr[i] = tem;
        tem = temp;        
    }
    arr[0] = temp;
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}