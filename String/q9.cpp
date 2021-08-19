// Find dublicate characters in a string
#include<bits/stdc++.h>
using namespace std;


void findDuplicate(string str){
    int size = str.size();
    int arr[26];
    memset(arr,0,sizeof(arr));

    for(int i = 0; i < size; i++){
        arr[str[i]-'a']++;
    }

    for(int i = 0; i < 26;i++){
        if(arr[i] > 1)
            cout<<char(i + 'a')<<" ";
    }



}


int main(){
    string str = "ayushgargisg";
    findDuplicate(str);



    return 0;
}