// Implement hashing
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {4,11,5,3,8,1,10,15,35,22};
    int size = sizeof(arr) / sizeof(int);
    list<int> *table;
    int bucket = 7;

    table = new list<int>[bucket];

    // insert
    for(int i = 0; i< size;i++){
        int key = arr[i] % bucket;
        table[key].push_back(arr[i]);
    }

    // remove 
    int key = arr[4] % bucket;
    table[key].remove(arr[4]);

    // serach
    key = arr[6] % bucket;
    list<int>::iterator itr;
    for(itr = table[key].begin(); itr != table[key].end(); itr++){
        if(*itr == arr[6]){
            cout<<*itr;
            break;
        }
    }
    // cout<<" "<<*(table[0].begin());

    return 0;
}