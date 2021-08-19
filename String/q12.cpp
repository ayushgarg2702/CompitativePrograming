// Count and say
#include<bits/stdc++.h>
using namespace std;



string countAndSay(vector<string> str, bool arr[], int n){
    if(n<=2){
        return str[n];
    }
    if(arr[n] != false){
        return str[n];
    }
        // cout<<str[0];

    int i = 0;
    while(arr[i] == true)
        i++;

    // cout<<i;
    for(i; i<=n;i++){

        arr[i] = true;
        string st = "";
        int k = 0;
        int j = i - 1;
        // cout<<str[2];
        int count = 1;
        // cout<<str[j].size()<<" ";
        for(k = 1; k < str[j].size(); k++){
            if(str[j][k-1] == str[j][k]){
                count++;
            }
            else{
                st += to_string(count);
                // cout<<str[i]<<" ";
                st += str[j][k-1];
                count = 1;
            }
        }


        st += to_string(count);
        st += str[j][k-1];
        str.push_back(st);
    }
    // cout<<st;

    return str[n];
}


int main(){
    bool arr[30];
    memset(arr,false,sizeof(arr));
    vector<string> str;
    str.push_back("WRONG");
    arr[0] = true;
    str.push_back("1");
    arr[1] = true;
    str.push_back("11");
    arr[2] = true;

    // str[1] = "1";
    // str[2] = "11";

    cout<<countAndSay(str,arr,6);


    return 0;
}