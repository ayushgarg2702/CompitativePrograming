// count the hishest string palindrom in a string

#include<bits/stdc++.h>
using namespace std;

int count_palindrome(string str, int size){
    if(size <= 1)
        return 1;
    
    bool P[size][size];
    memset(P, false, sizeof(P));
    // for(int i = 0; i<size;i++){
    //     for(int j = 0; j < size;j++){
    //         P[i][j]= false;
    //     }
    // }
    for(int i = 0; i < size;i++)
        P[i][i] = true;

    for(int i = 0; i < size - 1; i++){
        if(str[i] == str[i+1]){
            P[i][i+1] = true;
        }
    }

    for(int i = 2; i < size; i++){
        for(int j = 0; j < size - i; j++){
            int k = i+j;
            if(str[j] == str[k] && P[j+1][k-1]){
                P[j][k] = true;
            }
        }
    }
    int ans = 0;

    for(int i = 0; i<size;i++){
        for(int j = i; j < size;j++){
            // cout<<i<<" "<<j<<" "<<P[i][j]<<endl;
            if(P[i][j])
                ans = max(j-i+1,ans);
        }
    }
    
    return ans;
}   


int main(){
    string str = "acacacak";
    
    cout<<count_palindrome(str, str.size());



    return 0;
}