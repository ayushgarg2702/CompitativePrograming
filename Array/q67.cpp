// Find median in sorted rowwise array
#include<bits/stdc++.h>
using namespace std;


int main(){
    int arr[][5] = {{4,6,9,11,15},{1,2,3,5,7},{0,10,19,25,30},{12,23,40,48,50},{13,14,16,18,29}};
    int r = sizeof(arr[0]) / sizeof(int);
    int c = sizeof(arr) / sizeof(arr[0]);

    int min_element = arr[0][0], max_element = arr[0][r-1];
    for(int i = 1; i < c; i++){
        min_element = min(min_element,arr[i][0]);
        max_element = max(max_element,arr[i][c-1]);
    }

    int midexpect = (r * c + 1) / 2;

    while(min_element < max_element){
        int mid = min_element + (max_element - min_element) / 2;
        int placed = 0;

        for(int i = 0;i < r;i++){
            placed += upper_bound(arr[i],arr[i]+c,mid)- arr[i];
        }
        if(placed < midexpect){
            min_element = mid +1;
        }
        else{
            max_element = mid;
        }


    }

    cout<<min_element;
    return 0;
}