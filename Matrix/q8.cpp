// find largest rectangle in a binary array
#include<bits/stdc++.h>
using namespace std;

int highest_rect_in_row(int arr1[],int size){
    int lb[size] = {0};
    int rb[size] = {0};
    int ansmax[size] = {0};
    int i = 0;
    stack<int> stack;
    for(i = 0; i < size; i++){
        if(stack.empty()){
            stack.push(i);
            lb[i] = i;
            continue;
        }
        int top = stack.top();
        if(arr1[top] < arr1[i]){
            stack.push(i);
            lb[i] = top + 1;
        }
        else{
            while(arr1[top]>=arr1[i]){
                stack.pop();
                if(stack.empty()){
                    top=-1;
                    break;
                }
                top = stack.top();
            }
            lb[i] = top + 1;
            stack.push(i);

        }
    }

    while(!stack.empty()){
        stack.pop();
    }

    for(i = size-1; i >= 0; i--){
        if(stack.empty()){
            stack.push(i);
            rb[i] = i;
            continue;
        }
        int top = stack.top();
        if(arr1[top] < arr1[i]){
            stack.push(i);
            rb[i] = top - 1;
        }
        else{
            while(arr1[top]>=arr1[i] && !stack.empty()){
                stack.pop();
                if(stack.empty()){
                    top++;
                    break;
                }
                top = stack.top();
            }
            top--;
            rb[i] = top;
            stack.push(i);
        }
    }
    for(i = 0; i < size; i++){
        ansmax[i] = (rb[i] - lb[i] + 1 ) * arr1[i];
    }
    sort(ansmax,ansmax+size);
    return ansmax[size-1];

}


int main(){
    int arr[][4] = {{1,0,0,1},{1,1,1,1},{1,1,1,1},{1,0,1,0}};
    int l = 4;
    int h = 4;
    int S[h][l] = {0};
    for(int i = 0; i< l ;i++){
        S[0][i] = arr[0][i];
    }
    // for(int j = 0; j < h; j++){
    //     S[j][0] = arr[j][0];
    // }

    for(int i = 1;i < h;i++){
        for(int j = 0; j < l; j++){
            if(arr[i][j] == 1){
                S[i][j] = S[i-1][j] + 1;
            }
            else{
                S[i][j] = 0;
            }
        }
    }

    int ans[h] = {0};
    for(int i = 0; i < h; i++){
        ans[i] = highest_rect_in_row(S[i],l);
    }
    sort(ans,ans+h);
    cout<<ans[h-1];
    //     cout << arr[2][i] <<" ";
    // }
    // for(int i = 0;i < h;i++){
    //     for(int j = 0; j < l; j++){
    //         cout<<S[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    return 0;
}