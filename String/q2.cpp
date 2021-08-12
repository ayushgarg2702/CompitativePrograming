// print String after a specified char
#include<bits/stdc++.h>
#include  <iostream>
using namespace std;
#define MAX_ABOUT_LEN 250
int main(){
    string str;
    getline(cin, str);

    char ch;
    cin>>ch;

    int c;
    cin>>c;
    int count =0;

    for(int i = 0;i<str.size();i++){
        if(c<=count){
            cout<<str[i];
        }
        if(str[i] == ch){
            count++;
        }
    }



    return 0;
}