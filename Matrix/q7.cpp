// Find the maximum area rectangle form by histogram
#include<bits/stdc++.h>
using namespace std;

int main(){
    // int arr[] = {2,4,3,5,3,1,5};
    // int arr[] = {2,1,5,6,2,3};
    int arr[] = {3,2,2,3};

    int size = 4;
    int leftboundary[size] = {0};
    int righttboundary[size] = {0};
    int maxvalue[size] = {0};
    stack<int> stack;
    for(int i = 0; i < size; i++){
        if (stack.empty()){
            leftboundary[i] = i; 
            stack.push(i);
            continue;
        }
        int top = stack.top();
        if(arr[top] < arr[i]){
            stack.push(i);
            leftboundary[i] = top+1;
        }
        else{
            while(arr[top] >= arr[i]){
                stack.pop();
                if(stack.empty()){
                    top = -1;
                    break;
                }
                top = stack.top();
            }
            leftboundary[i] = top+1;
            stack.push(i);

        }
    }
    for(int i = 0; i < size; i++){
        cout << leftboundary[i] <<" ";
    }
    cout<<endl;

    while(!stack.empty()){
        stack.pop();
    }

    for(int i = size-1; i >= 0; i--){
        if (stack.empty()){
            righttboundary[i] = i; 
            stack.push(i);
            continue;
        }
        int top = stack.top();
        if(arr[top] < arr[i]){
            stack.push(i);
            righttboundary[i] = top-1;
        }
        else{
            while(arr[top] >= arr[i]){
                stack.pop();
                if(stack.empty()){
                    top = size;
                    break;
                }
                top = stack.top();
            }

            righttboundary[i] = top-1;
            stack.push(i);

        }
    }

    for(int i = 0; i <size; i++){
        maxvalue[i] = (righttboundary[i] -leftboundary[i] + 1)*arr[i];
    }
    sort(maxvalue,maxvalue+size);
    cout << maxvalue[size-1];
}