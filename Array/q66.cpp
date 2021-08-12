// search in a row wise or column wise sorted array

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[][3] = {{1,2,3},{20,30,40},{28,38,48},{30,40,50}};
    int r = sizeof(arr[0]) / sizeof(int);
    int c = (sizeof(arr) / sizeof(int) ) / r;

    int search_element = 38;
    int c2 = 0;
    r--;
    c--;
    while(r >= 0 && c2<= c){
        // cout<<arr[c2][r] <<" ";
        if(arr[c2][r] == search_element){
            cout<<c2<<" "<<r;
            break;
        }
        else if(arr[c2][r] < search_element){
            c2++;
        }
        else
            r--;
    }



    return 0;
}