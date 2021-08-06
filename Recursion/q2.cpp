// Generate subset of a strings.

#include<bits/stdc++.h>
using namespace std;

void SubSet( string str, string ss="", int c=0){
    if(str.size()==c){
        cout<<ss<<" ";
        return;
    }    

    SubSet(str,ss,c+1);
    SubSet(str,ss+str[c],c+1);
}

int main(){
    string String = "ABC";
    SubSet(String,"",0);

    // cout<<String.size();

    return 0;
}