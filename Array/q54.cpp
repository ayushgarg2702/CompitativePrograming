// Majority element, element occurs more than N/2 times.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {4, 5, 6, 4, 8, 9, 4, 4, 2, 4, 4, 1, 4, 2, 4};
    int size = sizeof(arr) / sizeof(int);


    int count = 1;
    int ans = arr[0];

    for(int index = 1; index < size; index++){
        if(arr[index] == ans)
            count++;
        else{
            count--;
            if(count == 0){
                ans = arr[index];
                count++;
            }
        }
    }

    int count2 = 0;
    for(int index = 0; index < size; index++){
        if(arr[index] == ans)
            count2++;
    }

    if(count2 > (size/2)){
        cout<<ans;
    }
    else
        cout<<"-1";






    return 0;
}