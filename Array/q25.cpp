// find the occarance of element which is more than n/k
#include<bits/stdc++.h>
using namespace std;

void navive_solution(int arr[], int size, int k){
    int telement = size / k;
    sort(arr,arr+size);
    int count = 1;
    for(int i = 1; i < size; i++){
        if (arr[i] == arr[i-1])
            count++;
        else{
            if(count >= telement){
                cout << arr[i-1]<< " ";
            }
                count = 1;
        } 
    }
}
void effective_solution(int arr[],int size,int k){
    priority_queue<int, vector<int>, greater<int> > pq;

    for(int i = 0; i < size; i++){
        pq.push(arr[i]);
    }
    int pre = pq.top();
    pq.pop();
    int count = 1;
    for(int i = 1; i < size; i++){
        // cout<<pre<<" ";
        if(pre == pq.top()){
            count++;
        }
        else{
            if(count>=int(size/k)){
                cout << pre<<" ";
            }
            count = 1;
        }
        pre = pq.top();
        pq.pop();
    }
    if(count>=int(size/k)){
        cout << pre<<" ";
    }
}

int main(void){
    int arr[] = {2,2,3,2,4,3};
    int size = sizeof(arr)/sizeof(int);
    int k = 3;

    // navive_solution(arr,size,k);
    effective_solution(arr,size,k);

    return 0;
}