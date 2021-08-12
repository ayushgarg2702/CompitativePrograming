// find the sub array with given sum
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {5,1,6,13,15,-2,1};
    int sum = 26;

    int size = sizeof(arr) / sizeof(int);

    set<int> s_arr;
    int s = 0;
    for(int i = 0; i < size; i++){
        s += arr[i];
        if(s_arr.find(s - sum) == s_arr.end()){
            s_arr.insert(s);
            // cout<<s<<" ";
        }
        else{
            cout<<" FOUND";
        }
    }




    return 0;
}