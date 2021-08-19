// Split the binary string into substrings with equal number of 0s and 1s
#include<bits/stdc++.h>
using namespace std;

int check(string str){
    int count_0 = 0;
    int count_1 = 0;
    int ans = 0;

    for(int i = 0; i < str.size(); i++){
        if(str[i]-'0'){
            count_1++;
        }
        else{
            count_0++;
        }
        if(count_0 == count_1 && count_1 != 0){
            ans++;
            count_1 = 0;
            count_0 = 0;
        }
            // cout<<ans<<" ";

    }
    if(ans == 0 || count_1 != count_0)
        return -1;
    return ans;
}

int main(){
    string str1 = "101011000011";
    string str2 = "11001011";
    cout<<"String 1 : "<<check(str1)<<endl;
    cout<<"String 2 : "<<check(str2)<<endl;



    return 0;
}