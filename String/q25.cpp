// Count palindrome subsequence (may be distinct)

#include<bits/stdc++.h>
using namespace std;

// Recursive
int CountPalindrome(string str, int start,int end){
    // cout<<start<<" "<<end<<endl;
    if(end < 0 || start > end){
        return 0;
    }
    if(start == end){
        return 1;
    }
    if(str[start] == str[end]){
        return CountPalindrome(str, start+1,end) + CountPalindrome(str, start, end-1) + 1;
    }
    else{
        return CountPalindrome(str, start +1,end) + CountPalindrome(str, start, end - 1) - CountPalindrome(str, start + 1, end - 1);
    }
}


// DP
int CountPalindrome2(string str, int start, int end){
    int dp[end+1][end+1];
    memset(dp,0,sizeof(dp));

    for(int i = 0; i < end; i++){
        dp[i][i] = 1;
    }
    
    for(int i = 2; i <= end; i++){
        for(int j = 0; j <= end - i;j++){
            int k = i+j-1;
            if(str[j] == str[k]){
                dp[j][k] = dp[j+1][k] + dp[j][k-1] + 1;
            }
            else{
                dp[j][k] = dp[j+1][k] + dp[j][k-1] - dp[j+1][k-1];
            }
        }

    }
        
    // for(int i = 0; i < end; i++){
    //     for(int j = 0; j < end ;j++){
    //         cout<<dp[i][j]<<" ";
    //     }cout<<endl;
    // }

    return dp[0][end-1];
}


int main(){
    string str = "abba";
    // cout << CountPalindrome(str,0,str.length() - 1);

    cout << CountPalindrome2(str,0,str.length());




    return 0;
}