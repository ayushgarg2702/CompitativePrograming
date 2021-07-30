// find all pair on integer array whose sum is equal to no.
#include<bits/stdc++.h>
using namespace std;

int main(void){
    int arr[] = {1, 5, 1, 7};

    int size = sizeof(arr) / sizeof(int);
    int k = 6;
    sort(arr,arr+size);
    vector<vector<int> > v2;
    vector<int> v1;
    int ele = 0, v = arr[0];
    for(int i = 1; i < size; i++){
        if(arr[i] == arr[i-1]){
            v = arr[i];
            ele++;
        }
        else{
            ele++;
            if(k / 2 == v){
                ele--;
            }
            v1.push_back(v);
            v1.push_back(ele);
            ele = 0;
            v = arr[i];
            v2.push_back(v1);
            v1.erase(v1.begin(),v1.end());
        }
    }
    ele++;
    v1.push_back(v);
    v1.push_back(ele);
    v2.push_back(v1);
    v1.erase(v1.begin(),v1.end());

    int pair = 0,m=0;
    for(int i = 0, j =size -1,m=0;j > i;){
        if(arr[i]>k){
            break;
        }
        else if((arr[i]+arr[j]) != k){
            if ((arr[i]+arr[j]) > k){
                j--;
            }
            else{
                i++;
                if(i>0&&arr[i]!=arr[i-1]){
                    m++;
                }
            }
        }
        else{
            for(int z=0;z<v2[m][1];z++)
                pair++;
            j--;
        }
    }    

    cout<<pair;
    return 0;
}