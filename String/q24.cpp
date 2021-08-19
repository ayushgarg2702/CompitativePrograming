// Count continues Palindromic Subsequences

#include<bits/stdc++.h>
using namespace std;

int PalindromicCheck(string str, int start, int end){
    if(start > end){
        return 0;
    }
    while(start < end){
        if(str[start] != str[end]){
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}

int PalindromicCount(string str){
    int size = str.length();
    if(size <= 1){
        return 1;
    }
    int ans = size;
    for(int i = 0; i < size-1; i++){
        if(str[i] == str[i+1]){
            ans++;
        }
    }
    for(int i = 2; i< size;i++){
        for(int j = 0; j < size - i; j++){
            int  k = j + i;
            ans += PalindromicCheck(str, j, k);
        }
    }
    return ans;
}



//Effetive solution in N*N
int PalindromicCount2(string str){
    int size = str.size();
    if(size < 1)
        return 0;
    if(size < 2)
        return 1;
    
    // bool dp[size];
    // memset(dp, false, sizeof(dp));

    // for(int i = 0; i < size - 1; i++){
    //     if(str[i] == str[i+1]){
    //         dp[i] = true;
    //         dp[i+1] = true;
    //         ans++;
    //     }
    // }
    int ans = size;
    for(int i = 0; i< size-1; i++){
        if(str[i] == str[i+1]){
            ans++;
            int start = i - 1;
            int end = i + 2;
            while(start > 0 && str[start]== str[end] && end < size){
                ans++;
                start--;
                end++;
            }
        }
    }
    for(int i = 0; i< size-2; i++){
        if(str[i] == str[i+2]){
            ans++;
            int start = i - 1;
            int end = i + 3;
            while(start > 0 && str[start]== str[end] && end < size){
                ans++;
                start--;
                end++;
            }
        }
    }
    return ans;
} 

int main(){
    string str = "aabab";
    cout<<PalindromicCount2(str);

    return 0;
}